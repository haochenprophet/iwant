#ifndef FIND_H
#define FIND_H

#include "object/object.h"

namespace n_find {
	class Cfind :public Object
	{
	public:
		std::list<uint8_t*> found_list;
		int found_list_count;
	public:
		Cfind();
		~Cfind();
		int my_init(void *p=nullptr);
		static int find(uint8_t* source, int64_t source_size, uint8_t* target, int64_t target_size, uint8_t** output);
		static int find(uint8_t* source, uint8_t* source_end, uint8_t* target, int64_t target_size, uint8_t** output);
		static int find(uint8_t* source, uint8_t* source_end, uint8_t* target, uint8_t* target_end, uint8_t** output);
		static int find(char * source, char * source_end, char * target, char* target_end, char ** output);
		int find_to_list(uint8_t* source, int64_t source_size, uint8_t* target, int64_t target_size);//result push to found_list
	};
}

using namespace n_find;

#endif
