#ifndef FREXP_H
#define FREXP_H

#include "object/object.h"

namespace n_frexp {
	class Cfrexp :public Object
	{
	public:
		Cfrexp();
		~Cfrexp();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfrexp); }
		static double frexp_c(double x, int* exp);

	};
}

using namespace n_frexp;

#endif
