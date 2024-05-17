#ifndef DEPLOY_DRIVER_H
#define DEPLOY_DRIVER_H

#include "object/object.h"

namespace n_deploy_driver {
	class Cdeploy_driver :public Object
	{
	public:
		Cdeploy_driver();
		~Cdeploy_driver();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_driver); }
	};
}

using namespace n_deploy_driver;

#endif
