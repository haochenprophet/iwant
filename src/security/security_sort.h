#ifndef SECURITY_SORT_H
#define SECURITY_SORT_H

#include "object/object.h"

namespace n_security_sort {
	class Csecurity_sort :public Object
	{
	public:
		Csecurity_sort();
		~Csecurity_sort();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_sort); }
	};
}

using namespace n_security_sort;

#endif
