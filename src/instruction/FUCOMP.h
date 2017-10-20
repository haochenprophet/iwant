#ifndef FUCOMP_H
#define FUCOMP_H

#include "object.h"

namespace n_FUCOMP {
	class CFUCOMP :public Object
	{
	public:
		CFUCOMP();
		~CFUCOMP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FUCOMP;

#endif
