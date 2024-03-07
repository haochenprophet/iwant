#ifndef CAR_GESTURE_H
#define CAR_GESTURE_H

#include "../object.h"

namespace n_car_gesture {
	class Ccar_gesture :public Object
	{
	public:
		Ccar_gesture();
		~Ccar_gesture();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_gesture); }
	};
}

using namespace n_car_gesture;

#endif
