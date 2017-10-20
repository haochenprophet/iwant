#ifndef VERW_H
#define VERW_H

#include "object.h"

namespace n_VERW {
	class CVERW :public Object
	{
	public:
		CVERW();
		~CVERW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VERW;

#endif
