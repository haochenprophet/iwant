#ifndef CAR_MCU_H
#define CAR_MCU_H

#include "object/object.h"

namespace n_car_mcu {
	class Ccar_mcu :public Object
	{
	public:
		Ccar_mcu();
		~Ccar_mcu();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_mcu); }
	};
}

using namespace n_car_mcu;

#endif
