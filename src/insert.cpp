#include "insert.h"
#include "locate.h"
#include "find.h"
#include "file.h"

void CinsertParameter::init()
{
	this->source_start = nullptr;
	this->source_end = nullptr;
	this->insert_offset = nullptr;
	this->insert_data_start = nullptr;
	this->insert_data_end = nullptr;
	this->result_start = nullptr;
	this->result_end = nullptr;
}

void  CinsertParameter::clear()
{
	this->source_start = nullptr;
	this->source_end = nullptr;
	this->insert_offset = nullptr;
	this->insert_data_start = nullptr;
	this->insert_data_end = nullptr;
	if (this->result_start != nullptr) delete[] this->result_start;//check and free allot memory 
	this->result_start = nullptr;
	this->result_end = nullptr;
}

CinsertParameter::CinsertParameter()
{
	this->init();
}

CinsertParameter::~CinsertParameter()
{
	if (this->result_start != nullptr) delete[] this->result_start;//check and free allot memory 
}

bool CinsertParameter::available()
{
	if (this->source_start == nullptr ||
		this->source_end == nullptr ||
		this->insert_offset == nullptr ||
		this->insert_data_start == nullptr ||
		this->insert_data_end == nullptr
		) return false;

	return true;
}

int Cinsert::my_init(void *p)
{
	this->name = "Cinsert";
	this->alias = "insert";
	return 0;
}

Cinsert::Cinsert()
{
	this->my_init();
}

Cinsert::~Cinsert()
{

}

int Cinsert::allot_memory(CinsertParameter* p)
{
	int64_t size;
	if (p->result_start != nullptr) return -1;

	size = p->source_end - p->source_start + p->insert_data_end - p->insert_data_start;
	if (size < 0) return -1;

	//int64_t Object::allot(int64_t size, void** o_addr)
	if (0 == this->allot(size, (void**)&p->result_start)) return -1;
	p->result_end = p->result_start + size;
	
	return 0;

}
//return -1 : Parameter error 0:Parameter available
int Cinsert::set(CinsertParameter* p, uint8_t* source_start, uint8_t* source_end, uint8_t* insert_offset, uint8_t* insert_data_start, uint8_t* insert_data_end)
{
	if (source_end < source_start || insert_data_end < insert_data_start|| insert_offset>source_end) return -1;

	p->source_start = source_start;
	p->source_end = source_end;
	p->insert_offset = insert_offset;
	p->insert_data_start = insert_data_start;
	p->insert_data_end = insert_data_end;

	if(0==this->allot_memory(p)) return 0;//allot memory success 

	p->clear();//error clear
	return -1;
}

int Cinsert::set(CinsertParameter* p, uint8_t* source_start, size_t source_size, size_t insert_offset, uint8_t* insert_data_start, size_t insert_data_size)
{
	return this->set(p, source_start, source_start + source_size, source_start + insert_offset, insert_data_start, insert_data_start + insert_data_size);
}

int Cinsert::set(uint8_t* source_start, uint8_t* source_end, uint8_t* insert_offset, uint8_t* insert_data_start, uint8_t* insert_data_end)
{
	return this->set(&this->insert_parameter, source_start, source_end, insert_offset, insert_data_start, insert_data_end);
}

int Cinsert::set(uint8_t* source_start, size_t source_size, size_t insert_offset, uint8_t* insert_data_start, size_t insert_data_size)
{
	return this->set(&this->insert_parameter, source_start, source_size, insert_offset, insert_data_start, insert_data_size);
}

//return  -1 :do nothing 0:pass 1:fail 
int Cinsert::insert(CinsertParameter* p)
{
	int64_t offset_size,insert_size;
	if (false == p->available()) return -1;

	if (p->result_start == nullptr)//check and allot memory 
	{
		if(0!=this->allot_memory(p)) return -1;//allot memory fail
	}
	//start insert data to result 
	offset_size=this->copy(p->source_start, p->result_start, p->insert_offset);//1.from start to offset
	insert_size=this->copy(p->insert_data_start, p->result_start + offset_size, p->insert_data_end);//2.inster data
	this->copy(p->insert_offset, p->result_start + offset_size + insert_size, p->source_end);//3.form offset to end
	return 0;
}

int Cinsert::insert()
{
	return this->insert(&this->insert_parameter);
}

int Cinsert::insert(CinsertParameter* p, int64_t line_number)
{
	p->insert_offset=Clocate::line(p->source_start,p->source_end,line_number);
	return this->insert(p);
}

int Cinsert::insert(int64_t line_number)
{
	return this->insert(&this->insert_parameter, line_number );
}

int Cinsert::insert(CinsertParameter* p, uint8_t* find, size_t find_size, InsertType type)
{
	uint8_t* offset;
	if (1 != Cfind::find(p->source_start, p->source_end, find, (int64_t)find_size, &offset)) return -1;
	if(type==InsertType::before) p->insert_offset = offset;
	if (type == InsertType::after) p->insert_offset = offset + find_size;
	return this->insert(p);
}
int Cinsert::insert(uint8_t* find, size_t find_size, InsertType type)
{
	return this->insert(&this->insert_parameter, find, find_size, type);
}
int Cinsert::insert(char* input_file, char* output_file, char* insert, int64_t line_number, InsertType type)//file line_number insert
{
	int ret;
	Cfile finput;
	Cfile foutput;
	Cfile finsert;
	
	if (type != InsertType::file && type != InsertType::string) return -1;//check type

	if (0 != finput.f_read(input_file)) return -1;//read fail 

	uint8_t* insert_offset = Clocate::line((uint8_t*)finput.addr, finput.size, line_number);
	if (nullptr == insert_offset) return -1;//not find line

	if (type == InsertType::file)
	{
		if (0 != finsert.f_read(insert)) return -1;//read fail 
		//int Cinsert::set(uint8_t* source_start, size_t source_size, size_t insert_offset, uint8_t* insert_data_start, size_t insert_data_size)
		this->set((uint8_t*)finput.addr, (size_t)finput.size, (size_t)(insert_offset - (uint8_t*)finput.addr), (uint8_t*)finsert.addr, (size_t)finsert.size);//init parameter
	}

	if (type == InsertType::string)
	{
		this->set((uint8_t*)finput.addr, finput.size, (size_t)(insert_offset - (uint8_t*)finput.addr), (uint8_t*)insert, strlen(insert) - 1);//init parameter
	}

	ret = this->insert(line_number);
	if (0 == ret)
	{
		foutput.f_write(output_file, this->insert_parameter.result_start, this->insert_parameter.result_end);//write file
	}
	this->insert_parameter.clear();//check and free result physical memory[n]	
	return ret;
}

int Cinsert::insert(char* input_file, char* output_file, char* insert, size_t insert_offset, InsertType type)//file offset insert
{
	int ret;
	Cfile finput;
	Cfile foutput;
	Cfile finsert;

	if (type != InsertType::file && type != InsertType::string) return -1;//check type

	if(0!=finput.f_read(input_file)) return -1;//read fail 

	if (type == InsertType::file)
	{
		if (0 != finsert.f_read(insert)) return -1;//read fail 
		//int Cinsert::set(uint8_t* source_start, size_t source_size, size_t insert_offset, uint8_t* insert_data_start, size_t insert_data_size)
		this->set((uint8_t*)finput.addr, finput.size, insert_offset, (uint8_t*)finsert.addr, finsert.size);//init parameter
	}

	if (type == InsertType::string)
	{
		this->set((uint8_t*)finput.addr, finput.size, insert_offset, (uint8_t*)insert, strlen(insert)-1);//init parameter
	}

	ret = this->insert();
	if (0==ret)
	{
		foutput.f_write(output_file,this->insert_parameter.result_start,this->insert_parameter.result_end);//write file
	}
	this->insert_parameter.clear();//check and free result physical memory[n]	
	return ret;
}
//argv[1]=<input_file> argv[2]=<output_file> argv[3]=<instert_data> argv[4]<data_type:F:file S:string>  argv[5]=<offset/linue_number/find_data>  argv[6]<B:find_data Before A:find_data after>^int Cinsert::insert(int argc, char* argv[])
int Cinsert::insert(int argc, char* argv[])
{
	if (argc < 6)//check input 
	{
		printf("The number of input parameters is less than the insert command requirement.\n");
		return -1;
	}
	this->insert_parameter.clear();//clear insert_parameter for clear Residual information
	//insert File F:
	if ( (argv[4][0] == 'F' || argv[4][0] == 'f') && (argv[6][0] == 'L' || argv[6][0] == 'l') )
	{
		//int Cinsert::insert(char* input_file, char* output_file, char* insert, int64_t line_number, InsertType type)//file line_number insert
		return this->insert((char*)argv[1], (char*)argv[2], (char*)argv[3], (int64_t)atol(argv[5]), InsertType::file);
	}
	
	if ((argv[4][0] == 'F' || argv[4][0] == 'f') && (argv[6][0] == 'O' || argv[6][0] == 'o'))
	{
		//int Cinsert::insert(char* input_file, char* output_file, char* insert_file, size_t insert_offset, InsertType type)//file offset insert
		return this->insert((char*)argv[1], (char*)argv[2], (char*)argv[3], (size_t)atol(argv[5]), InsertType::file);
	}
	//insert String S:
	if ((argv[4][0] == 'S' || argv[4][0] == 's') && (argv[6][0] == 'L' || argv[6][0] == 'l')) //line insert
	{
		//int Cinsert::insert(char* input_file, char* output_file, char* insert, int64_t line_number, InsertType type)//file line_number insert
		return this->insert((char*)argv[1], (char*)argv[2], (char*)argv[3], (int64_t)atol(argv[5]), InsertType::string);
	}
	if ((argv[4][0] == 'S' || argv[4][0] == 's') && (argv[6][0] == 'O' || argv[6][0] == 'o'))//offset insert
	{
		//int Cinsert::insert(char* input_file, char* output_file, char* insert_file, size_t insert_offset, InsertType type)//file offset insert
		return this->insert((char*)argv[1], (char*)argv[2], (char*)argv[3], (size_t)atol(argv[5]), InsertType::string);
	}
	return -1;
}

#ifndef INSERT_TEST
#define INSERT_TEST 0//1
#endif

#if INSERT_TEST
#include INCLUDE_ALL_H

void insert_test()
{
	uint8_t source_data[] = { '1','2','3','4','5','6','7','8','9','\0'};
	uint8_t instert_data[] = { 'A' };
	uint8_t find_data[] = { '2','3','4'};
	CinsertParameter p;
	Cinsert i;

	i.set(&p,source_data,(size_t) sizeof(source_data), (size_t)1, instert_data, (size_t)sizeof(instert_data));
	i.insert(&p);
	std::cout << (char*)p.result_start << endl;

	i.set(source_data, (size_t)sizeof(source_data), (size_t)0, instert_data, (size_t)sizeof(instert_data));
	//int Cinsert::insert(uint8_t * find, size_t find_size, InsertType type)
	i.insert(find_data, sizeof(find_data), InsertType::after);
	std::cout << (char*)i.insert_parameter.result_start << endl;
	//int Cinsert::insert(int argc, char* argv[])
	int argc = 7;
	char* argv[] = { {"insert"},{"input.txt"}, {"output.txt"} ,{"insert.txt"},{"F"},{ "5"} ,{"L"} };
	i.insert(argc, argv);
}

int main(int argc, char *argv[])
{
	WHERE_I;
	//insert_test();
	Cinsert ins;
	return ins.insert(argc, argv);
}
#endif
