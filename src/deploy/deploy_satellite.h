#ifndef DEPLOY_SATELLITE_H
#define DEPLOY_SATELLITE_H

#include "object/object.h"

namespace n_deploy_satellite {
	class Cdeploy_satellite :public Object
	{
	public:
		Cdeploy_satellite();
		~Cdeploy_satellite();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_satellite); }
	};
}

using namespace n_deploy_satellite;

#endif
