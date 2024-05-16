#ifndef OCEAN_TEST_H
#define OCEAN_TEST_H

#include "object/object.h"

namespace n_ocean_test {
	class Cocean_test :public Object
	{
	public:
		Cocean_test();
		~Cocean_test();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_test); }
	};
}

using namespace n_ocean_test;

#endif
