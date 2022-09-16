#ifndef FIND_H
#define FIND_H

#include "object.h"

namespace n_find {
	class Cfind :public Object
	{
	public:
		Cfind();
		~Cfind();
		int my_init(void *p=nullptr);
		static int find(uint8_t* source, int64_t source_size, uint8_t* target, int64_t target_size, uint8_t** output);
		static int find(uint8_t* source, uint8_t* source_end, uint8_t* target, int64_t target_size, uint8_t** output);
		static int find(uint8_t* source, uint8_t* source_end, uint8_t* target, uint8_t* target_end, uint8_t** output);
	};
}

using namespace n_find;

#endif
