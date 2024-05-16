#ifndef PSRLQ_H
#define PSRLQ_H

#include "object/object.h"

namespace n_PSRLQ {
	class CPSRLQ :public Object
	{
	public:
		CPSRLQ();
		~CPSRLQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSRLQ;

#endif
