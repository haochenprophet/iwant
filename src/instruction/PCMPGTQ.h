#ifndef PCMPGTQ_H
#define PCMPGTQ_H

#include "object/object.h"

namespace n_PCMPGTQ {
	class CPCMPGTQ :public Object
	{
	public:
		CPCMPGTQ();
		~CPCMPGTQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPGTQ;

#endif
