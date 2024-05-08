#ifndef ERFC_H
#define ERFC_H

#include "../object.h"

namespace n_erfc {
	class Cerfc :public Object
	{
	public:
		Cerfc();
		~Cerfc();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cerfc); }
		static double erfc_c(double x);
		static float erfcf_c(float x);
		static long double erfcl_c(long double x);

	};
}

using namespace n_erfc;

#endif
