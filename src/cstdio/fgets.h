#ifndef FGETS_H
#define FGETS_H

#include "object/object.h"

namespace n_fgets {
	class Cfgets :public Object
	{
	public:
		Cfgets();
		~Cfgets();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfgets); }
		static char* fgets_c(char* str, int num, FILE* stream);
	};
}

using namespace n_fgets;

#endif
