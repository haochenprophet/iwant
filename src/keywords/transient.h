#ifndef TRANSIENT_H
#define TRANSIENT_H

#include "object/object.h"

namespace n_transient {
	class Ctransient :public Object
	{
	public:
		Ctransient();
		int my_init(void *p=nullptr);
	};
}

using namespace n_transient;

#endif
