#ifndef FSUBP_H
#define FSUBP_H

#include "object.h"

namespace n_FSUBP {
	class CFSUBP :public Object
	{
	public:
		CFSUBP();
		~CFSUBP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSUBP;

#endif
