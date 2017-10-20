#ifndef KSHIFTRQ_H
#define KSHIFTRQ_H

#include "object.h"

namespace n_KSHIFTRQ {
	class CKSHIFTRQ :public Object
	{
	public:
		CKSHIFTRQ();
		~CKSHIFTRQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KSHIFTRQ;

#endif
