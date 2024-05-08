#ifndef CAR_MODE_COLD_H
#define CAR_MODE_COLD_H

#include "../object.h"

namespace n_car_mode_cold {
	class Ccar_mode_cold :public Object
	{
	public:
		Ccar_mode_cold();
		~Ccar_mode_cold();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_mode_cold); }
	};
}

using namespace n_car_mode_cold;

#endif
