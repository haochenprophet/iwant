#ifndef DEPLOY_DEVICE_H
#define DEPLOY_DEVICE_H

#include "object/object.h"

namespace n_deploy_device {
	class Cdeploy_device :public Object
	{
	public:
		Cdeploy_device();
		~Cdeploy_device();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_device); }
	};
}

using namespace n_deploy_device;

#endif
