#ifndef REPLACE_H
#define REPLACE_H

#include "object.h"
#include "find.h"

namespace n_replace {
	class CreplaceParameter
	{
	public:
		void* find_memory;
		int64_t find_memory_size;
		void* replace_memory;
		int64_t replace_memory_size;
		int64_t find_count;//analyze set it
		std::list<void*> location_list;//point [0] to find_count void* address , analyze() set it 
	public:
		CreplaceParameter();
		~CreplaceParameter();
	};

	class Creplace :public Object
	{
	public:
		void * source;
		int64_t source_size;
		std::list<CreplaceParameter*> parameter_list;
		void * map;
		void * result;
		int64_t result_size;
	public:
		Creplace();
		~Creplace();
		int my_init(void *p=nullptr);
		int analyze(void* source, int64_t source_size, CreplaceParameter* p);
		int analyze(void* source, int64_t source_size);
		int64_t copy(uint8_t* source, uint8_t* dest, int64_t size);
		int64_t copy(uint8_t* source, uint8_t* dest, uint8_t* source_end);
		int replace(void * source, int64_t source_size, CreplaceParameter* p, void** result_address, int64_t * result_size);
		int replace(void * source, void  * source_end,  CreplaceParameter* p, void** result_address, int64_t * result_size);
		int replace(void * source, int64_t source_size, CreplaceParameter* p);
		int replace(void * source, void  * source_end,  CreplaceParameter* p);
		int add_parameter_list(CreplaceParameter * p);
	};
}

using namespace n_replace;

#endif
