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
	this->parameter_list.clear();
}

int Creplace::build_map(CreplaceMap* map, int map_count, int start_index, CreplaceParameter* p)//
{
	if (start_index >= map_count || start_index < 0) return -1;
	int i = start_index;
	void* addr;//address
	for (auto it = p->location_list.cbegin(); it != p->location_list.cend(); ++it, i++)
	{
		addr = (void*)(*it);
		//case 1:
		if (i == 0 || map[i - 1].address < addr)
		{
			map[i].address = addr;
			map[i].p = p;
			continue;
		}

		//case 2: if (i > 0) && (map[i - 1].address > addr)
		if (map[i - 1].address > addr)//checke change for order by address 
		{
			map[i].address = map[i - 1].address;
			map[i].p = map[i - 1].p;

			map[i - 1].address = addr;
			map[i - 1].p = p;
			continue;//next;
		}
		//case 3 :map[i - 1].address == addr do nothing
	}
	return i;//return next index
}

int Creplace::build_map(int start_index, CreplaceParameter* p)
{
	return this->build_map(this->map, (int)this->map_total_count, start_index, p);
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

//parameter_list[n]->location_list[n]->replace memory address start point => map[n]-> [replace memory address][CreplaceParameter*]
//output : this->total_size , this->map_total_count ,this->map
int Creplace::analyze(void* source, int64_t source_size)//build map[] 
{
	CreplaceParameter* p;
	int64_t total_allot_size = 0;
	int start_index;
	this->total_size = source_size;
	this->map_total_count = 0;
	for (auto it = this->parameter_list.cbegin(); it != this->parameter_list.cend(); ++it)
	{
		p = (CreplaceParameter*)(*it);
		this->analyze(source, source_size, p);
		this->total_size+= (p->replace_memory_size - p->find_memory_size) * p->find_count;
		this->map_total_count += p->find_count;
	}
	//allot map memory
	if (this->map_total_count < 1) return -1;//not find replace
	//build replace map 
	total_allot_size = this->map_total_count * sizeof(CreplaceMap);
	if (total_allot_size != this->allot(total_allot_size, (void**)&this->map)) return -1;//allot memory fail
	start_index = 0;
	for (auto it = this->parameter_list.cbegin(); it != this->parameter_list.cend(); ++it)
	{
		p = (CreplaceParameter*)(*it);
		start_index=this->build_map(start_index, p);
		if (start_index < 0) return 1;//error
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

int Creplace::replace(void* source, int64_t source_size)//map total count 
{
	int64_t size;
	uint8_t * start ,* end ;
	uint8_t* dest;

	if(0!=this->analyze(source, source_size)) return -1;//error or nothing
	//this->total_size, this->map_total_count, this->map
	if (this->map_total_count < 1) return -1;
	if (this->total_size != this->allot(this->total_size, (void**)&this->result)) return -1;//allot memory fail
	this->result_size = this->total_size;//set this->result_size

	//init for copy
	start = (uint8_t*)source;
	end = (uint8_t*)source + source_size;
	dest = (uint8_t*)this->result;
	//start fill result memory 
	for (int i = 0; i < this->map_total_count; i++)
	{
		size = this->copy(start, (uint8_t*)dest, (uint8_t*)this->map[i].address);//source,dest,source_end
		dest += size;
		size = this->copy((uint8_t*)this->map[i].p->replace_memory, dest, this->map[i].p->replace_memory_size);//source,dest,size
		if (size != this->map[i].p->replace_memory_size) { return 1; } //error 

		start = (uint8_t*)this->map[i].address + this->map[i].p->find_memory_size;//Calculate the next start address
		dest += size;//Calculate the next dest address
	}
	if (start < end) size = this->copy(start, (uint8_t*)dest, end);//source,dest,source_end
	return 0;
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

#if REPLACE_TEST
#include "all_h_include.h"

void replace_test()
{
	Creplace r;
	char source[] = "12345678956F";
	char memory[] ={ '5', '6' };
	char memory1[] = { '8', '9' };

	char replace[5] = { 'A','B','C','D','E' };
	char replace1[5] = { 'F','G','H','I','J' };
	CreplaceParameter p,p1;

	char* result=nullptr;
	int64_t result_size = 0;

	//init CreplaceParameter
	p.find_memory = (void*)&memory;
	p.find_memory_size = sizeof(memory);
	p.replace_memory = (void*)&replace;
	p.replace_memory_size = sizeof(replace);

	r.replace((void*)& source, sizeof(source), &p, (void**) &result, & result_size);
	printf("result=%s result_size=%I64d\n", result, result_size);
	r.delete_allot((void**)&result);

	p1.find_memory = (void*)&memory1;
	p1.find_memory_size = sizeof(memory1);
	p1.replace_memory = (void*)&replace1;
	p1.replace_memory_size = sizeof(replace1);
	//build parameter_list for replace(void * source, int64_t source_size);
	r.add_parameter_list(&p);
	r.add_parameter_list(&p1);
	r.replace((void*)&source, sizeof(source));
	printf("r.result=%s r.result_size=%I64d\n", (char *)r.result, r.result_size); //test

}

int main(int argc, char *argv[])
{
	std::cout << "REPLACE_TEST\n\n";

	replace_test();
	return 0;
}
#endif 