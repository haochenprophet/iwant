#ifndef MFENCE_H
#define MFENCE_H

#include "object.h"

namespace n_MFENCE {
	class CMFENCE :public Object
	{
	public:
		CMFENCE();
		~CMFENCE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MFENCE;

#endif
