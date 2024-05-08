#ifndef CAR_GPS_H
#define CAR_GPS_H

#include "../object.h"

namespace n_car_gps {
	class Ccar_gps :public Object
	{
	public:
		Ccar_gps();
		~Ccar_gps();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_gps); }
	};
}

using namespace n_car_gps;

#endif
