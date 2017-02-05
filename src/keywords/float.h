#ifndef FLOAT_H
#define FLOAT_H

#include "../object.h"

namespace n_float {
	class Cfloat :public Object
	{
	public:
		Cfloat();
		int my_init(void *p=nullptr);
	};
}

using namespace n_float;

#endif
