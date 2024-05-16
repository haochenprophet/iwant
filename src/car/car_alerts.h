#ifndef CAR_ALERTS_H
#define CAR_ALERTS_H

#include "object/object.h"

namespace n_car_alerts {
	class Ccar_alerts :public Object
	{
	public:
		Ccar_alerts();
		~Ccar_alerts();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_alerts); }
	};
}

using namespace n_car_alerts;

#endif
