#ifndef CAR_CAMERA_H
#define CAR_CAMERA_H

#include "object/object.h"

namespace n_car_camera {
	class Ccar_camera :public Object
	{
	public:
		Ccar_camera();
		~Ccar_camera();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_camera); }
	};
}

using namespace n_car_camera;

#endif
