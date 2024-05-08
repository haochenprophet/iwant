#ifndef QSORT_H
#define QSORT_H

#include "../object.h"

namespace n_qsort {
	class Cqsort :public Object
	{
	public:
		Cqsort();
		~Cqsort();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cqsort); }
		static void qsort_c(void* base, size_t num, size_t size, int (*compar)(const void*, const void*));

	};
}

using namespace n_qsort;

#endif
