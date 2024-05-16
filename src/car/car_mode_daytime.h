#ifndef CAR_MODE_DAYTIME_H
#define CAR_MODE_DAYTIME_H

#include "object/object.h"

namespace n_car_mode_daytime {
	class Ccar_mode_daytime :public Object
	{
	public:
		Ccar_mode_daytime();
		~Ccar_mode_daytime();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_mode_daytime); }
	};
}

using namespace n_car_mode_daytime;

#endif
