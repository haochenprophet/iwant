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
	};
}

using namespace n_qsort;

#endif
