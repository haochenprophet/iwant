#ifndef POW_H
#define POW_H

#include "../object.h"

namespace n_pow {
	class Cpow :public Object
	{
	public:
		Cpow();
		~Cpow();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cpow); }
		static double pow_c(double base, double exponent);

	};
}

using namespace n_pow;

#endif
