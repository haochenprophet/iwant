#ifndef SCALBN_H
#define SCALBN_H

#include "object/object.h"

namespace n_scalbn {
	class Cscalbn :public Object
	{
	public:
		Cscalbn();
		~Cscalbn();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cscalbn); }
		double scalbn_c(double x, int n);
		float scalbnf_c(float x, int n);
		long double scalbnl_c(long double x, int n);

	};
}

using namespace n_scalbn;

#endif
