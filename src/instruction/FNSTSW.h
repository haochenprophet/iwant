#ifndef FNSTSW_H
#define FNSTSW_H

#include "object/object.h"

namespace n_FNSTSW {
	class CFNSTSW :public Object
	{
	public:
		CFNSTSW();
		~CFNSTSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FNSTSW;

#endif
