#ifndef FCOMP_H
#define FCOMP_H

#include "object.h"

namespace n_FCOMP {
	class CFCOMP :public Object
	{
	public:
		CFCOMP();
		~CFCOMP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FCOMP;

#endif
