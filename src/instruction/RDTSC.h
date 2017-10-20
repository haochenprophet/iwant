#ifndef RDTSC_H
#define RDTSC_H

#include "object.h"

namespace n_RDTSC {
	class CRDTSC :public Object
	{
	public:
		CRDTSC();
		~CRDTSC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RDTSC;

#endif
