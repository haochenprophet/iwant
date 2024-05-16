#ifndef PCLMULQDQ_H
#define PCLMULQDQ_H

#include "object/object.h"

namespace n_PCLMULQDQ {
	class CPCLMULQDQ :public Object
	{
	public:
		CPCLMULQDQ();
		~CPCLMULQDQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCLMULQDQ;

#endif
