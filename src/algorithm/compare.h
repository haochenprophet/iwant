#ifndef COMPARE_H
#define COMPARE_H

#include "object/object.h"

namespace n_compare {
	class Ccompare :public Object
	{
	public:
		Ccompare();
		~Ccompare();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccompare); }
	public:
		int compare(void* left, void* right, size_t cmp_size);

	};
}

using namespace n_compare;

#endif
