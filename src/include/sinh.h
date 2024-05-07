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
		size_t my_size() { return sizeof(Csinh); }
		static double sinh_c(double x);

	};
}

using namespace n_sinh;

#endif
