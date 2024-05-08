#ifndef RDTSCP_H
#define RDTSCP_H

#include "../object.h"

namespace n_RDTSCP {
	class CRDTSCP :public Object
	{
	public:
		CRDTSCP();
		~CRDTSCP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_RDTSCP;

#endif
