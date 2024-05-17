#ifndef DEPLOY_LOCATION_H
#define DEPLOY_LOCATION_H

#include "object/object.h"

namespace n_deploy_location {
	class Cdeploy_location :public Object
	{
	public:
		Cdeploy_location();
		~Cdeploy_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_location); }
	};
}

using namespace n_deploy_location;

#endif
