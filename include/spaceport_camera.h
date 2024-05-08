#ifndef SPACEPORT_CAMERA_H
#define SPACEPORT_CAMERA_H

#include "../object.h"

namespace n_spaceport_camera {
	class Cspaceport_camera :public Object
	{
	public:
		Cspaceport_camera();
		~Cspaceport_camera();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cspaceport_camera); }
	};
}

using namespace n_spaceport_camera;

#endif
