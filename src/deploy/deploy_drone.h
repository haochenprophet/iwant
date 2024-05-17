#ifndef DEPLOY_DRONE_H
#define DEPLOY_DRONE_H

#include "object/object.h"

namespace n_deploy_drone {
	class Cdeploy_drone :public Object
	{
	public:
		Cdeploy_drone();
		~Cdeploy_drone();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_drone); }
	};
}

using namespace n_deploy_drone;

#endif
