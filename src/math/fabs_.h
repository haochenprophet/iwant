#ifndef FABS_H_
#define FABS_H_

#include "object/object.h"

namespace n_fabs {
	class Cfabs :public Object
	{
	public:
		Cfabs();
		~Cfabs();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfabs); }
		static double fabs_c(double x);
	};
}

using namespace n_fabs;

#endif
