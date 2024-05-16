#ifndef SATELLITE_CAMERA_H
#define SATELLITE_CAMERA_H

#include "object/object.h"

namespace n_satellite_camera {
	class Csatellite_camera :public Object
	{
	public:
		Csatellite_camera();
		~Csatellite_camera();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_camera); }
	};
}

using namespace n_satellite_camera;

#endif
