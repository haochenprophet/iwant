#ifndef SUM_H
#define SUM_H

#include "object/object.h"

namespace n_sum {
	class Csum :public Object
	{
	public:
		Csum();
		~Csum();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csum); }
	public:
		size_t byte(void* data, size_t size);//byte[n]+
		int byte(char* filename, size_t * result);//output check sum to result
	};
}

using namespace n_sum;

#endif
