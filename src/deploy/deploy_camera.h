#ifndef DEPLOY_CAMERA_H
#define DEPLOY_CAMERA_H

#include "object/object.h"

namespace n_deploy_camera {
	class Cdeploy_camera :public Object
	{
	public:
		Cdeploy_camera();
		~Cdeploy_camera();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_camera); }
	};
}

using namespace n_deploy_camera;

#endif
