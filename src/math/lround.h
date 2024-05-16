#ifndef LROUND_H
#define LROUND_H

#include "object/object.h"

namespace n_lround {
	class Clround :public Object
	{
	public:
		Clround();
		~Clround();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clround); }
		long int lround_c(double x);
		long int lroundf_c(float x); 
		long int lroundl_c(long double x);

	};
}

using namespace n_lround;

#endif
