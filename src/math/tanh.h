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
	};
}

using namespace n_tanh;

#endif
