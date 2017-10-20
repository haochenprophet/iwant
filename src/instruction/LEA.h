#ifndef LEA_H
#define LEA_H

#include "object.h"

namespace n_LEA {
	class CLEA :public Object
	{
	public:
		CLEA();
		~CLEA();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LEA;

#endif
