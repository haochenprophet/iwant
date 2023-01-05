#ifndef TANH_H
#define TANH_H

#include "../object.h"

namespace n_tanh {
	class Ctanh :public Object
	{
	public:
		Ctanh();
		~Ctanh();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ctanh); }
		static double tanh_c(double x);

	};
}

using namespace n_tanh;

#endif
