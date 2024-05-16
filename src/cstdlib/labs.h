#ifndef LABS_H
#define LABS_H

#include "object/object.h"

namespace n_labs {
	class Clabs :public Object
	{
	public:
		Clabs();
		~Clabs();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clabs); }
		static long int labs_c(long int n);

	};
}

using namespace n_labs;

#endif
