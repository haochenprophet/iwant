#ifndef CAR_LIGHT_H
#define CAR_LIGHT_H

#include "../object.h"

namespace n_car_light {
	class Ccar_light :public Object
	{
	public:
		Ccar_light();
		~Ccar_light();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_light); }
	};
}

using namespace n_car_light;

#endif
