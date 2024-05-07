#ifndef PUSHFQ_H
#define PUSHFQ_H

#include "../object.h"

namespace n_PUSHFQ {
	class CPUSHFQ :public Object
	{
	public:
		CPUSHFQ();
		~CPUSHFQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUSHFQ;

#endif
