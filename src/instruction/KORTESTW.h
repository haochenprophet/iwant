#ifndef KORTESTW_H
#define KORTESTW_H

#include "object.h"

namespace n_KORTESTW {
	class CKORTESTW :public Object
	{
	public:
		CKORTESTW();
		~CKORTESTW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KORTESTW;

#endif
