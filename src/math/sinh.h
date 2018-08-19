#ifndef SINH_H
#define SINH_H

#include "../object.h"

namespace n_sinh {
	class Csinh :public Object
	{
	public:
		Csinh();
		~Csinh();
		int my_init(void *p=nullptr);
	};
}

using namespace n_sinh;

#endif
