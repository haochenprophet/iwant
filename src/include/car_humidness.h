#ifndef CAR_HUMIDNESS_H
#define CAR_HUMIDNESS_H

#include "../object.h"

namespace n_car_humidness {
	class Ccar_humidness :public Object
	{
	public:
		Ccar_humidness();
		~Ccar_humidness();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_humidness); }
	};
}

using namespace n_car_humidness;

#endif
