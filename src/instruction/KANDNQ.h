#ifndef KANDNQ_H
#define KANDNQ_H

#include "object.h"

namespace n_KANDNQ {
	class CKANDNQ :public Object
	{
	public:
		CKANDNQ();
		~CKANDNQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KANDNQ;

#endif
