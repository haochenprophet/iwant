#ifndef ASINH_H
#define ASINH_H

#include "../object.h"

namespace n_asinh {
	class Casinh :public Object
	{
	public:
		Casinh();
		~Casinh();
		int my_init(void *p=nullptr);
	};
}

using namespace n_asinh;

#endif
