#include "replace.h"
#ifndef REPLACE_TEST
#define REPLACE_TEST 0//1
#endif
CreplaceParameter::CreplaceParameter()
{
	this->find_count = 0;
	this->find_memory = nullptr;
	this->find_memory_size = 0;
	this->replace_memory = 0;
	this->replace_memory_size = 0;
}

CreplaceParameter::~CreplaceParameter()
{
	this->location_list.clear();
}

int Creplace::my_init(void* p)
{
	this->name = "Creplace";
	this->alias = "replace";

	this->source = nullptr;
	this->result = nullptr;
	this->source_size = 0;
	this->result_size = 0;
	this->map = nullptr;
	this->total_size = 0;
	return 0;
}

Creplace::Creplace()
{
	this->my_init();
}

Creplace::~Creplace()
{
	this->delete_allot((void**)&this->result);
	this->parameter_list.clear();
}

int Creplace::analyze(void* source, int64_t source_size, CreplaceParameter* p)
{
	int exist;
	uint8_t * output;
	uint8_t * start = (uint8_t*)source;
	uint8_t * end = start + source_size;

	p->location_list.clear(); 
	p->find_count = 0;

	while(1) {
		exist=Cfind::find(start, end,(uint8_t*) p->find_memory, p->find_memory_size, & output);
		if (exist == 1)
		{
			p->location_list.push_back((void*)output);//store address to list
			p->find_count++;
			start = output+ p->find_memory_size;
			continue;
		}
		break;
	}

	return (int) p->find_count;
}

int Creplace::analyze(void* source, int64_t source_size)//build map 
{
	CreplaceParameter* p;
	this->total_size = source_size;
	for (auto it = this->parameter_list.cbegin(); it != this->parameter_list.cend(); ++it)
	{
		p = (CreplaceParameter*)(*it);
		this->analyze(source, source_size, p);
		this->total_size+= (p->replace_memory_size - p->find_memory_size) * p->find_count;
	}
	return 0;
}

int64_t Creplace::copy(uint8_t* source, uint8_t* dest, int64_t size)
{
	int64_t i;
	for (i=0; i < size; i++) dest[i] = source[i];
	return i;
}

int64_t Creplace::copy(uint8_t* source, uint8_t* dest, uint8_t* source_end)
{
	return this->copy(source, dest, (int64_t)(source_end - source));
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
	total_allot_size = source_size + (p->replace_memory_size - p->find_memory_size) * p->find_count;

	if(total_allot_size!=this->allot((int)total_allot_size,(void **) & dest)) return -1;//allot memory fail
	*result_address = (void*)dest;
	*result_size = total_allot_size;

	for (std::list<void*>::iterator it = p->location_list.begin(); it != p->location_list.end(); ++it)
	{
		size=this->copy(start, (uint8_t*)dest, (uint8_t*)(*it));//source,dest,source_end
		dest += size;
		size=this->copy((uint8_t*)p->replace_memory, dest, p->replace_memory_size);//source,dest,size
		if (size != p->replace_memory_size) { return 1; } //error 
		start =(uint8_t*) * it+p->find_memory_size;//Calculate the next start address
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

//Check for conflicts and ambiguities
//return -1 do nothing 0:pass ,1 : conflicts 2:ambiguities 
int Creplace::add_parameter_list(CreplaceParameter * p)
{
	int exist;
	uint8_t* output;
	CreplaceParameter* i;
	
	if (p == nullptr) return -1;

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

#if REPLACE_TEST
#include "all_h_include.h"

void replace_test()
{
	Creplace r;
	char source[] = "12345678956F";
	char memory[] ={ '5', '6' };
	char replace[5] = { 'A','B','C','D','E' };
	CreplaceParameter p;
	char* result=nullptr;
	int64_t result_size = 0;

	//init CreplaceParameter
	p.find_memory = (void*)&memory;
	p.find_memory_size = sizeof(memory);
	p.replace_memory = (void*)&replace;
	p.replace_memory_size = sizeof(replace);

	r.replace((void*)& source, sizeof(source), &p, (void**) &result, & result_size);
	printf("result=%s result_size=%ld\n", result, result_size);
	r.delete_allot((void**)&result);
}

int main(int argc, char *argv[])
{
	std::cout << "REPLACE_TEST\n\n";

	replace_test();
	return 0;
}
#endif 