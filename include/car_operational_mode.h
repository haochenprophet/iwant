#ifndef CAR_OPERATIONAL_MODE_H
#define CAR_OPERATIONAL_MODE_H

#include "../object.h"

namespace n_car_operational_mode {
	class Ccar_operational_mode :public Object
	{
	public:
		Ccar_operational_mode();
		~Ccar_operational_mode();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_operational_mode); }
	};
}

using namespace n_car_operational_mode;

#endif
