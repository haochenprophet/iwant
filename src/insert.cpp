#include "insert.h"

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
	if (size < 1) return -1;

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

//return  -1 :do nothing 0:pass 1:fail 
int Cinsert::insert(CinsertParameter* p)
{
	int64_t offset_size,insert_size;
	if (false == p->available()) return -1;

	if (p->result_start == nullptr)//check and allot memory 
	{
		if(0!=this->allot_memory(p)) return -1;//allot memory fail
	}
	//start inster data to result 
	offset_size=this->copy(p->source_start, p->result_start, p->insert_offset);//1.from start to offset
	insert_size=this->copy(p->insert_data_start, p->result_start + offset_size, p->insert_data_end);//2.inster data
	this->copy(p->insert_offset, p->result_start + offset_size + insert_size, p->source_end);//3.form offset to end
	return 0;
}

#ifndef INSERT_TEST
#define INSERT_TEST 0//1
#endif

#if INSERT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
