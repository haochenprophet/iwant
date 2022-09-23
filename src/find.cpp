#include "find.h"
int Cfind::my_init(void *p)
{
	this->name = "Cfind";
	this->alias = "find";
	this->found_list_count = 0;
	return 0;
}

Cfind::Cfind()
{
	this->my_init();
}

Cfind::~Cfind()
{
	this->found_list.clear();
}

//return :-1: do nothing 1:find  0:not find
int Cfind::find(uint8_t* source, int64_t source_size, uint8_t* target, int64_t target_size, uint8_t** output)
{
	int64_t n, t;//n:is the source[n] nonius ;t: target[t] nonius

	if (source == nullptr || target == nullptr) return -1;//do nothing
	if ((target_size > source_size) || source_size <= 0 || target_size <= 0) return -1;//do nothing

	for (n = 0, t = 0; n < source_size; n++)
	{
		if (source[n] == target[t])
		{
			t++;
			if (t == target_size)//++t and check find 
			{
				*output = &source[n] - target_size+1;
				return 1;//find
			}
			continue;
		}
		if (n + t >= source_size) return 0;//end return
		n += t;//fast forward  nonius to source[n+t]
		t = 0;//rollback nonius to 0 of target[t] 	
	}
	return 0;//not find 
}

int Cfind::find(uint8_t* source, uint8_t* source_end, uint8_t* target, int64_t target_size, uint8_t ** output)
{
	return  Cfind::find( source, (int64_t)(source_end - source), target, target_size, output);
}

int Cfind::find(uint8_t* source, uint8_t* source_end, uint8_t* target, uint8_t* target_end, uint8_t ** output)
{
	return  Cfind::find(source, (int64_t)(source_end - source), target, (int64_t)(target_end- target), output);
}

int Cfind::find_to_list(uint8_t* source, int64_t source_size, uint8_t* target, int64_t target_size)//result push to found_list
{
	uint8_t * output,*end;

	this->found_list_count = 0;
	for (end = source + source_size; source < end; source += target_size)
	{
		//int Cfind::find(uint8_t* source, uint8_t* source_end, uint8_t* target, int64_t target_size, uint8_t ** output)
		if(1 != Cfind::find(source, end, target, target_size, (uint8_t**)&output)) break;//not find break
		this->found_list.push_back(output);
		this->found_list_count++;
	}

	return this->found_list_count;
}

#ifndef FIND_TEST
#define FIND_TEST 0//1
#endif

#if FIND_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FIND_TEST\n\n";

	return 0;
}
#endif 