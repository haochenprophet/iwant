#ifndef CAR_OXYGEN_H
#define CAR_OXYGEN_H

#include "../object.h"

namespace n_car_oxygen {
	class Ccar_oxygen :public Object
	{
	public:
		Ccar_oxygen();
		~Ccar_oxygen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_oxygen); }
	};
}

using namespace n_car_oxygen;

#endif
