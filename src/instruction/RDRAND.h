#ifndef RDRAND_H
#define RDRAND_H

#include "object/object.h"

namespace n_RDRAND {
	class CRDRAND :public Object
	{
	public:
		CRDRAND();
		~CRDRAND();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RDRAND;

#endif
