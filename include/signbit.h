#ifndef SIGNBIT_H
#define SIGNBIT_H

#include "../object.h"

namespace n_signbit {
	class Csignbit :public Object
	{
	public:
		Csignbit();
		~Csignbit();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csignbit); }
		static int signbit_c(double x);
	};
}

using namespace n_signbit;

#endif
