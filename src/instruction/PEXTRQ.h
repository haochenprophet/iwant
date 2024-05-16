#ifndef PEXTRQ_H
#define PEXTRQ_H

#include "object/object.h"

namespace n_PEXTRQ {
	class CPEXTRQ :public Object
	{
	public:
		CPEXTRQ();
		~CPEXTRQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PEXTRQ;

#endif
