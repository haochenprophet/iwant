#ifndef SCALBLN_H
#define SCALBLN_H

#include "../object.h"

namespace n_scalbln {
	class Cscalbln :public Object
	{
	public:
		Cscalbln();
		~Cscalbln();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cscalbln); }
		static double scalbln_c(double x, long int n);
		static float scalblnf_c(float x, long int n);
		static long double scalblnl_c(long double x, long int n);

	};
}

using namespace n_scalbln;

#endif
