#ifndef COSH_H
#define COSH_H

#include "../object.h"

namespace n_cosh {
	class Ccosh :public Object
	{
	public:
		Ccosh();
		~Ccosh();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ccosh); }
		static double cosh_h(double x);

	};
}

using namespace n_cosh;

#endif
