#ifndef HOME_CAMERA_H
#define HOME_CAMERA_H

#include "../object.h"

namespace n_home_camera {
	class Chome_camera :public Object
	{
	public:
		Chome_camera();
		~Chome_camera();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Chome_camera); }
	};
}

using namespace n_home_camera;

#endif
