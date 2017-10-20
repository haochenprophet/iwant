#ifndef PSHUFHW_H
#define PSHUFHW_H

#include "object.h"

namespace n_PSHUFHW {
	class CPSHUFHW :public Object
	{
	public:
		CPSHUFHW();
		~CPSHUFHW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSHUFHW;

#endif
