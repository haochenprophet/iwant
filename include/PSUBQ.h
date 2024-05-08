#ifndef PSUBQ_H
#define PSUBQ_H

#include "../object.h"

namespace n_PSUBQ {
	class CPSUBQ :public Object
	{
	public:
		CPSUBQ();
		~CPSUBQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSUBQ;

#endif
