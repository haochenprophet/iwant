#ifndef SQRTSD_H
#define SQRTSD_H

#include "../object.h"

namespace n_SQRTSD {
	class CSQRTSD :public Object
	{
	public:
		CSQRTSD();
		~CSQRTSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SQRTSD;

#endif
