#ifndef CAR_WIFI_H
#define CAR_WIFI_H

#include "object/object.h"

namespace n_car_wifi {
	class Ccar_wifi :public Object
	{
	public:
		Ccar_wifi();
		~Ccar_wifi();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_wifi); }
	};
}

using namespace n_car_wifi;

#endif
