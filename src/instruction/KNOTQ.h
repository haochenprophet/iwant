#ifndef KNOTQ_H
#define KNOTQ_H

#include "object.h"

namespace n_KNOTQ {
	class CKNOTQ :public Object
	{
	public:
		CKNOTQ();
		~CKNOTQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KNOTQ;

#endif
