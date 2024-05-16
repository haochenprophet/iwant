#ifndef CAR_TEST_H
#define CAR_TEST_H

#include "object/object.h"

namespace n_car_test {
	class Ccar_test :public Object
	{
	public:
		Ccar_test();
		~Ccar_test();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_test); }
	};
}

using namespace n_car_test;

#endif
