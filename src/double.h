#ifndef DOUBLE_H
#define DOUBLE_H

#include "object.h"

namespace n_double {
	class Cdouble :public Object
	{
	public:
		Cdouble();
		int my_init(void *p=NULL);
	};
}

using namespace n_double;

#endif
