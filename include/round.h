#ifndef ROUND_H
#define ROUND_H

#include "../object.h"

namespace n_round {
	class Cround :public Object
	{
	public:
		Cround();
		~Cround();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cround); }
		static double round_c(double x);
		static float roundf_c(float x);
		static long double roundl_c(long double x);

	};
}

using namespace n_round;

#endif
