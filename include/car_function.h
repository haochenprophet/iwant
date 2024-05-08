#ifndef CAR_FUNCTION_H
#define CAR_FUNCTION_H

#include "../object.h"

namespace n_car_function {
	class Ccar_function :public Object
	{
	public:
		Ccar_function();
		~Ccar_function();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_function); }
	};
}

using namespace n_car_function;

#endif
