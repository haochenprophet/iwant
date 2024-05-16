#ifndef ASIN_H
#define ASIN_H

#include "object/object.h"

namespace n_asin {
	class Casin :public Object
	{
	public:
		Casin();
		~Casin();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Casin); }
		static double asin_c(double x);

	};
}

using namespace n_asin;

#endif
