#ifndef CAR_STACK_H
#define CAR_STACK_H

#include "../object.h"

namespace n_car_stack {
	class Ccar_stack :public Object
	{
	public:
		Ccar_stack();
		~Ccar_stack();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_stack); }
	};
}

using namespace n_car_stack;

#endif
