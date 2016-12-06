#ifndef TRANSIENT_H
#define TRANSIENT_H

#include "object.h"

namespace n_transient {
	class Ctransient :public Object
	{
	public:
		Ctransient();
		int my_init(void *p=NULL);
	};
}

using namespace n_transient;

#endif
