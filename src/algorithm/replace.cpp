#include "replace.h"
#ifndef REPLACE_TEST
#define REPLACE_TEST 0//1
#endif

CLocationRange::CLocationRange()
{
	this->start = nullptr;
	this->end = nullptr;
	this->size = 0;
}

size_t CLocationRange::set_size(size_t size)
{
	//case 1
	if (size > 0)
	{
		this->size = size;
		return size;
	}
	//case 2
	if (this->start < this->end)
	{
		this->size = (uint8_t*)this->end - (uint8_t*)this->start;
		return this->size;
	}
	//case 3
	this->size = 0;
	return this->size;
}

CreplaceParameter::CreplaceParameter()
{
	this->find_count = 0;
	this->find_memory = nullptr;
	this->find_memory_size = 0;
	this->to_memory = nullptr;
	this->to_memory_size = 0;
	this->replace_memory = 0;
	this->replace_memory_size = 0;
	this->total_change_size = 0;
	this->replace_to_memory_end = false;
}

CreplaceParameter::~CreplaceParameter()
{
	this->location_list.clear();
	this->location_range_list.clear();
}

int Creplace::my_init(void* p)
{
	this->name = "Creplace";
	this->alias = "replace";

	this->source = nullptr;
	this->result = nullptr;
	this->source_size = 0;
	this->result_size = 0;

	this->total_size = 0;
	this->map_total_count = 0;
	return 0;
}

Creplace::Creplace()
{
	this->my_init();
}

Creplace::~Creplace()
{
	this->delete_allot((void**)&this->result);
	this->map.clear();
	this->parameter_list.clear();
}

int64_t Creplace::analyze(void* source, int64_t source_size, CreplaceParameter* p)
{
	int exist;
	uint8_t * output;
	uint8_t * start = (uint8_t*)source;
	uint8_t * end = start + source_size;
	CLocationRange location_range;

	p->location_list.clear(); 
	p->location_range_list.clear();
	p->find_count = 0;

	while(1) {
		//1.find from memory
		exist=Cfind::find(start, end,(uint8_t*) p->find_memory, p->find_memory_size, & output);
		if (exist == 1)
		{
			p->location_list.push_back((void*)output);//store address to list
			p->find_count++;
			start = output+ p->find_memory_size;
			//set location range
			location_range.start = (void*)output;//store start point
			location_range.end = (void*)start;//store end point
			location_range.size = p->find_memory_size;

			//2.check from memory --to memory 
			if (p->to_memory != nullptr && p->to_memory_size != 0)
			{
				exist = Cfind::find(start, end, (uint8_t*)p->to_memory, p->to_memory_size, &output);

				if (exist == 1)
				{
					start = output + p->to_memory_size;
					if (p->replace_to_memory_end)
					{
						location_range.end = start;// output + p->to_memory_size;
					}
					else
					{
						location_range.end = (void*)output;//store end point
					}					
					location_range.set_size();//end-start
				}
			}
			p->total_change_size += (p->replace_memory_size - location_range.size);//Calculate the total change size
			p->location_range_list.push_back(location_range);//And also to record to location_range list
			continue;
		}
		break;
	}

	return p->find_count;
}
int Creplace::build_map(CreplaceParameter* p)
{
	CreplaceMap rmap;
	//for (auto it = p->location_list.cbegin(); it != p->location_list.cend(); ++it)
	for (std::list<CLocationRange>::iterator it = p->location_range_list.begin(); it != p->location_range_list.end(); ++it)
	{
		rmap.address= (void*)(it->start);
		rmap.size = it->size;
		rmap.p = p;
		this->map.push_back(rmap);
	}
	return 0;
}

//parameter_list[n]->location_list[n]->replace memory address start point => map[n]-> [replace memory address][CreplaceParameter*]
//output : this->total_size , this->map_total_count ,this->map

int64_t Creplace::analyze(void* source, int64_t source_size)//build map[] 
{
	CreplaceParameter* p;

	this->total_size = source_size;
	this->map_total_count = 0;

	for (auto it = this->parameter_list.cbegin(); it != this->parameter_list.cend(); ++it)
	{
		p = (CreplaceParameter*)(*it);
		this->analyze(source, source_size, p);
		//this->total_size+= (p->replace_memory_size - p->find_memory_size) * p->find_count;
		this->total_size += p->total_change_size;
		this->map_total_count += p->find_count;
	}
	//allot map memory
	if (this->map_total_count < 1) return -1;//not find replace
	//build replace map 

	for (auto it = this->parameter_list.cbegin(); it != this->parameter_list.cend(); ++it)
	{
		p = (CreplaceParameter*)(*it);
		this->build_map(p);
	}

	//this->map.sort();//list sort build error  
	//this->list_map();//test ok
	return 0;
}

//class Creplace: Can be used for editingand modification of images, sounds, text, memory, documents ...
//output result memory [n] = replace ( source memory[n] + replace information + relpace map + replace rule )
//input: source +size + repalce list[n] , output :result+ size
//process: find -> analyze -> replace
//list[n]->location[n] 
//return -1: not find no relace ,
int Creplace::replace(void * source , int64_t source_size , CreplaceParameter * p, void ** result_address , int64_t * result_size)
{
	int64_t total_allot_size,size;
	uint8_t* start = (uint8_t*)source;
	uint8_t* end = (uint8_t*)source+ source_size;
	uint8_t* dest;

	if (0 == this->analyze(source, source_size, p)) return -1;//not find no replace
	//total_allot_size = source_size + (p->replace_memory_size - p->find_memory_size) * p->find_count;
	total_allot_size = source_size + p->total_change_size;

	if(total_allot_size!=this->allot(total_allot_size,(void **) & dest)) return -1;//allot memory fail
	*result_address = (void*)dest;
	*result_size = total_allot_size;

	//for (std::list<void*>::iterator it = p->location_list.begin(); it != p->location_list.end(); ++it)
	for (std::list<CLocationRange>::iterator it = p->location_range_list.begin(); it != p->location_range_list.end(); ++it)
	{
		size=this->copy(start, (uint8_t*)dest, (uint8_t*)(it->start));//source,dest,source_end
		dest += size;
		size=this->copy((uint8_t*)p->replace_memory, dest, p->replace_memory_size);//source,dest,size
		if (size != p->replace_memory_size) { return 1; } //error 
		start = (uint8_t*)it->end;// +p->find_memory_size;//Calculate the next start address
		dest += size;//Calculate the next dest address
	}
	if(start< end) size = this->copy(start, (uint8_t*)dest, end);//source,dest,source_end
	return 0;
}

int Creplace::replace(void* source, void * source_end, CreplaceParameter* p, void** result_address, int64_t* result_size)
{
	if (source >= source_end) return -1;
	int64_t source_size = (int64_t)((uint8_t*)source_end - (uint8_t*)source);//Calculate source_size
	return this->replace(source, source_size, p, result_address, result_size);
}

int Creplace::replace(void* source, int64_t source_size, CreplaceParameter* p)
{
	return this->replace(source, source_size, p, &this->result, &this->result_size);
}

int Creplace::replace(void* source, void* source_end, CreplaceParameter* p)
{
	return this->replace(source, source_end, p, &this->result, &this->result_size);
}
//will use this->parameter_list
int Creplace::replace(void* source, int64_t source_size)//map total count 
{
	int64_t size, skip_size;
	uint8_t * start ,* end, * dest,*min_address,*past_address ;
	CreplaceMap map;
	CreplaceParameter* p=nullptr;

	if(0!=this->analyze(source, source_size)) return -1;//error or nothing
	//this->total_size, this->map_total_count, this->map
	if (this->map_total_count < 1) return -1;
	if (this->total_size != this->allot(this->total_size, (void**)&this->result)) return -1;//allot memory fail
	this->result_size = this->total_size;//set this->result_size

	//init for copy
	start = (uint8_t*)source;
	end = (uint8_t*)source + source_size;
	dest = (uint8_t*)this->result;

	min_address = end+1;//init min address to max address for first compare 
	past_address = start-1;//init past address to start address for first compare 

	//start fill result memory 
	for (int i = 0; i < this->map_total_count; i++)
	{
		for (auto it = this->map.cbegin(); it != this->map.cend(); ++it)
		{
			map = *it;
		//	printf("[%d] min_address=%I64X map.address=%I64X past_address=%I64X\n",i, (int64_t)min_address , (int64_t) map.address, (int64_t) past_address); //test ok

			if (map.address < min_address&& map.address>past_address)
			{
				min_address = (uint8_t*)map.address;
				skip_size = map.size;
				p = map.p;//set CreplaceParameter
			}
		}
	//	printf("min_address=%I64X\n",(int64_t)min_address);//test ok

		size = this->copy(start, (uint8_t*)dest, min_address);//source,dest,source_end
		dest += size;

		size = this->copy((uint8_t*)p->replace_memory, dest, p->replace_memory_size);//source,dest,size
		if (size !=p->replace_memory_size) { return 1; } //error 

		start = min_address + skip_size;//Calculate the next start address
		dest += size;//Calculate the next dest address

		past_address = min_address;//set for get next min address
		min_address = end;//set for get next min address
	}
	if (start < end) size = this->copy(start, (uint8_t*)dest, end);//source,dest,source_end
	return 0;
}

int Creplace::replace(void* source, void* source_end)
{
	return this->replace(source, (int64_t)((uint8_t*)source_end- (uint8_t*)source));
}
//Check for conflicts and ambiguities
//return -1 do nothing 0:pass ,1 : conflicts 2:ambiguities 
int Creplace::add_parameter_list(CreplaceParameter * p)
{
	int exist;
	uint8_t* output;
	CreplaceParameter* i;
	
	if (p == nullptr) return -1;

	if (this->parameter_list.empty())//init first p
	{
		this->parameter_list.push_back(p);
		return 0;
	}

	for (auto it = this->parameter_list.cbegin(); it != this->parameter_list.cend(); ++it)
	{
		i = *it;
		if (i->find_memory_size >= p->find_memory_size)//check and select source memory []
		{
			exist = Cfind::find((uint8_t*)i->find_memory, i->find_memory_size, (uint8_t*)p->find_memory, p->find_memory_size, &output);
		}
		else {
			exist = Cfind::find((uint8_t*)p->find_memory, p->find_memory_size, (uint8_t*)i->find_memory, i->find_memory_size, &output);
		}

		if (exist == 1 && i->find_memory_size == p->find_memory_size) return 1;
		if (exist == 1) return 2;

		this->parameter_list.push_back(p);
	}

	return 0;
}

int Creplace::replace(char* inputfile, char* outputfile, uint8_t* find_data, size_t find_size, uint8_t* replace_data, size_t replace_size, uint8_t* end_find_data, size_t end_find_size)
{
	Cfile f;
	Creplace r;

	f.f_read(inputfile);
	if (f.size < find_size) return -1;//will not be found
	//init replace parameter
	this->replace_parameter.find_memory = find_data;
	this->replace_parameter.find_memory_size = find_size;
	this->replace_parameter.replace_memory = replace_data;
	this->replace_parameter.replace_memory_size = replace_size;
	this->replace_parameter.to_memory = end_find_data;
	this->replace_parameter.to_memory_size = end_find_size;

	//int Creplace::replace(void* source, int64_t source_size, CreplaceParameter* p)
	if (0 != r.replace((void*)f.addr, (int64_t)f.size, &this->replace_parameter))return -1;//not find or not replace

	//size_t Creplace::f_write(char* f_name, void* addr, size_t size)
	f.f_write(outputfile, r.result, (size_t)r.result_size);//write file
	return 0;
}

int Creplace::replace(char* inputfile, char* outputfile, char* find_str, char* replace_str, uint8_t* end_find_data, size_t end_find_size)
{
	//int Creplace::replace(char* inputfile, char* outputfile, uint8_t* find_data, size_t find_size, uint8_t* replace_data, size_t replace_size, uint8_t* end_find_data, size_t end_find_size)
	return this->replace(inputfile, outputfile, (uint8_t*)find_str, strlen(find_str) , (uint8_t*)replace_str, strlen(replace_str),end_find_data, end_find_size);
}

int Creplace::replace(wchar_t* inputfile, wchar_t* outputfile, char* find_str, char* replace_str, uint8_t* end_find_data, size_t end_find_size)
{
	string input = this->wc_s(inputfile);
	string output = this->wc_s(outputfile);
	//int Creplace::replace(char* inputfile, char* outputfile, char* find_str, char* replace_str, uint8_t * end_find_data, size_t end_find_size)
	return this->replace((char*)input.c_str(), (char*) output.c_str(), find_str, replace_str, end_find_data, end_find_size);
}

int Creplace::replace(char* inputfile, char* outputfile, char* find_file, char* replace_file, int type,uint8_t* end_find_data, size_t end_find_size)//type for C++ overloaded replace() functions
{
	Cfile find, replace;
	if (0 != find.f_read(find_file)) return -1;
	if (0 != replace.f_read(replace_file)) return -1;
	//int Creplace::replace(char* inputfile, char* outputfile, uint8_t * find_data, size_t find_size, uint8_t * replace_data, size_t replace_size, uint8_t * end_find_data, size_t end_find_size)
	return this->replace(inputfile, outputfile, (uint8_t*)find.addr, find.size, (uint8_t*)replace.addr, replace.size, end_find_data, end_find_size);
}

//argv[1]=<InFileName> argv[2]=<OutFileName> argv[3]=<find>  argv[4]<replace> argv[5]=<S/F> argv[6]=[endfind] argv[7]=1/0 1:replace_end 0:no replace"
int Creplace::replace(int argc, char* argv[])
{
	Creplace r;
	ReplaceType type = ReplaceType::none;

	uint8_t* end_find_data = nullptr;
	size_t end_find_size = 0;

	if (argc < 6)//check input 
	{
		printf("The number of input parameters is less than the replace command requirement.\n");
		return -1;
	}

	if (argv[5][0] == 'S' || argv[5][0] == 's') type = ReplaceType::string;//string type
	if (argv[5][0] == 'F' || argv[5][0] == 'f') type = ReplaceType::file;//file type
	if (argv[5][0] == 'L' || argv[5][0] == 'l') type = ReplaceType::line;//line type

	if (type == ReplaceType::none)
	{
		printf("Can not find ReplaceType F or S of command line input.\n");
		return -2;
	}
	
	if (argc > 6)//argv[6]=[endfind]
	{
		end_find_data =(uint8_t*) argv[6];
		end_find_size = strlen(argv[6]);
	}

	if (argc > 7)// 1:replace_end 0:no replace
	{
		if (argv[7][0] == '1') this->replace_parameter.replace_to_memory_end = true;
		if (argv[7][0] == '0') this->replace_parameter.replace_to_memory_end = false;
	}

	if (type == ReplaceType::line)
	{
		if (end_find_data == nullptr)
		{
			end_find_data = (uint8_t*)"\n";
			end_find_size = 1;//sizeof("\r\n")-1;
		}
		string rs = argv[4];
		rs += "\n";
		this->replace_parameter.replace_to_memory_end = true;//set flag for replace end to \n
		//int Creplace::replace(char* inputfile, char* outputfile, char* find_str, char* replace_str, uint8_t* end_find_data, size_t end_find_size)
		return r.replace(argv[1], argv[2], argv[3],(char*) rs.c_str(), end_find_data, end_find_size);
	}

	if (type == ReplaceType::string)
	{
		//int Creplace::replace(char* inputfile, char* outputfile, char* find_str, char* replace_str)
		return r.replace(argv[1], argv[2], argv[3], argv[4], end_find_data, end_find_size);
	}

	if (type == ReplaceType::file)
	{
		//int Creplace::replace(char* inputfile, char* outputfile, char* find_file, char* replace_file, int type)//type for C++ overloaded replace() functions
		return r.replace(argv[1], argv[2], argv[3], argv[4], (int)type, end_find_data, end_find_size);
	}
	return 0;
}

void Creplace::list_map()
{
	int i = 0;
	for (auto it = this->map.begin(); it != this->map.end(); ++it,i++)
	{
		CreplaceMap map = *it;
		//printf("this->map[%d].address=%I64X\n", i,(int64_t)map.address);
		std::cout << "this->map[" << i << "].address=" << std::hex << (int64_t)map.address << endl;
	}
}

#if REPLACE_TEST
#include "all_h_include.h"

void replace_test()
{
	Creplace r;
	char source[] = "56895678956F5*\n\r#5689F5#";
	char memory[] ={ '5','6'};
	char memory1[] = { '8', '9' };
	char memory2[] = { 'F', '5', };

	char to_memory[] = { '\n','\r' };

	char replace[] = { 'A','B','C','D','E','-' };
	char replace1[] = { 'F','G','H','I','J','-' };
	char replace2[] = { 'K','L','M','N','O','P','-' };

	CreplaceParameter p,p1,p2;

	char* result=nullptr;
	int64_t result_size = 0;

	//printf("sizeof(CreplaceMap)=%d\n", sizeof(CreplaceMap));
	//init CreplaceParameter
	p.find_memory = (void*)&memory;
	p.find_memory_size = sizeof(memory);
	p.replace_memory = (void*)&replace;
	p.replace_memory_size = sizeof(replace);

	r.replace((void*)& source, sizeof(source), &p, (void**) &result, & result_size);
	//printf("result=%s result_size=%I64d\n", result, result_size);//%I64d linux g++ build warning
	std::cout << "result=" << (char*)result << " result_size=" << result_size << endl;
	r.delete_allot((void**)&result);

	p1.find_memory = (void*)&memory1;
	p1.find_memory_size = sizeof(memory1);
	p1.replace_memory = (void*)&replace1;
	p1.replace_memory_size = sizeof(replace1);
	//build parameter_list for replace(void * source, int64_t source_size);
	r.add_parameter_list(&p);
	r.add_parameter_list(&p1);
	r.replace((void*)&source, sizeof(source));
	//printf("r.result=%s r.result_size=%I64d\n", (char *)r.result, r.result_size); //%I64d linux g++ build warning
	std::cout << "r.result=" << (char*)r.result << " r.result_size=" << r.result_size << endl;

	p2.find_memory = (void*)&memory2;
	p2.find_memory_size = sizeof(memory2);
	p2.replace_memory = (void*)&replace2;
	p2.replace_memory_size = sizeof(replace2);
	p2.to_memory = (void*)to_memory;
	p2.to_memory_size= sizeof(to_memory);
	r.add_parameter_list(&p2);
	r.replace((void*)&source, sizeof(source));
	std::cout << "r.result=" << (char*)r.result << " r.result_size=" << r.result_size << endl;

}

int main(int argc, char *argv[])
{
	std::cout << "REPLACE_TEST\n\n";

	replace_test();
	return 0;
}
#endif 