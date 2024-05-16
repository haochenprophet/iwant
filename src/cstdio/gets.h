#ifndef GETS_H
#define GETS_H

#include "object/object.h"

namespace n_gets {
	class Cgets :public Object
	{
	public:
		Cgets();
		~Cgets();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cgets); }
		static char* gets_c(char* str);

	};
}

using namespace n_gets;

#endif
