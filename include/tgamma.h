#ifndef TGAMMA_H
#define TGAMMA_H

#include "../object.h"

namespace n_tgamma {
	class Ctgamma :public Object
	{
	public:
		Ctgamma();
		~Ctgamma();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Ctgamma); }
		static double tgamma_c(double x);
		static float tgammaf_c(float x);
		static long double tgammal_c(long double x);

	};
}

using namespace n_tgamma;

#endif
