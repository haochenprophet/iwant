#ifndef PINSRQ_H
#define PINSRQ_H

#include "object/object.h"

namespace n_PINSRQ {
	class CPINSRQ :public Object
	{
	public:
		CPINSRQ();
		~CPINSRQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PINSRQ;

#endif
