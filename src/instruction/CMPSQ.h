#ifndef CMPSQ_H
#define CMPSQ_H

#include "object.h"

namespace n_CMPSQ {
	class CCMPSQ :public Object
	{
	public:
		CCMPSQ();
		~CCMPSQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMPSQ;

#endif
