#ifndef REMQUO_H
#define REMQUO_H

#include "../object.h"

namespace n_remquo {
	class Cremquo :public Object
	{
	public:
		Cremquo();
		~Cremquo();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cremquo); }
		double remquo_c(double numer, double denom, int* quot);
		float remquof_c(float numer, float denom, int* quot);
		long double remquol_c(long double numer, long double denom, int* quot);

	};
}

using namespace n_remquo;

#endif
