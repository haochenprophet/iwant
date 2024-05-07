#ifndef CAR_POWER_ON_H
#define CAR_POWER_ON_H

#include "../object.h"

namespace n_car_power_on {
	class Ccar_power_on :public Object
	{
	public:
		Ccar_power_on();
		~Ccar_power_on();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_power_on); }
	};
}

using namespace n_car_power_on;

#endif
