#ifndef BSEARCH_H
#define BSEARCH_H

#include "object/object.h"

namespace n_bsearch {
	class Cbsearch :public Object
	{
	public:
		Cbsearch();
		~Cbsearch();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cbsearch); }
		static void* bsearch_c(const void* key, const void* base, size_t num, size_t size, int (*compar)(const void*, const void*));

	};
}

using namespace n_bsearch;

#endif
