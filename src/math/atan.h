#ifndef ATAN_H
#define ATAN_H

#include "../object.h"

namespace n_atan {
	class Catan :public Object
	{
	public:
		Catan();
		~Catan();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Catan); }
		static double atan_c(double x);

	};
}

using namespace n_atan;

#endif
