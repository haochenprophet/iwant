#ifndef CLC_H
#define CLC_H

#include "object.h"

namespace n_CLC {
	class CCLC :public Object
	{
	public:
		CCLC();
		~CCLC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CLC;

#endif
