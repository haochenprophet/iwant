#ifndef BSEARCH_H
#define BSEARCH_H

#include "../object.h"

namespace n_bsearch {
	class Cbsearch :public Object
	{
	public:
		Cbsearch();
		~Cbsearch();
		int my_init(void *p=nullptr);
	};
}

using namespace n_bsearch;

#endif
