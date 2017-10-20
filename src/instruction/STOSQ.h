#ifndef STOSQ_H
#define STOSQ_H

#include "object.h"

namespace n_STOSQ {
	class CSTOSQ :public Object
	{
	public:
		CSTOSQ();
		~CSTOSQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_STOSQ;

#endif
