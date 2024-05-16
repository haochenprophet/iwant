#ifndef EXP2_H
#define EXP2_H

#include "object/object.h"

namespace n_exp2 {
	class Cexp2 :public Object
	{
	public:
		Cexp2();
		~Cexp2();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cexp2); }
		static double exp2_c(double x);
		static float exp2f_c(float x);
		static long double exp2l_c(long double x);

	};
}

using namespace n_exp2;

#endif
