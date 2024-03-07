#ifndef CAR_ALARM_H
#define CAR_ALARM_H

#include "../object.h"

namespace n_car_alarm {
	class Ccar_alarm :public Object
	{
	public:
		Ccar_alarm();
		~Ccar_alarm();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_alarm); }
	};
}

using namespace n_car_alarm;

#endif
