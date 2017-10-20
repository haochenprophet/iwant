#ifndef KUNPCKDQ_H
#define KUNPCKDQ_H

#include "object.h"

namespace n_KUNPCKDQ {
	class CKUNPCKDQ :public Object
	{
	public:
		CKUNPCKDQ();
		~CKUNPCKDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KUNPCKDQ;

#endif
