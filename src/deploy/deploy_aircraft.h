#ifndef DEPLOY_AIRCRAFT_H
#define DEPLOY_AIRCRAFT_H

#include "object/object.h"

namespace n_deploy_aircraft {
	class Cdeploy_aircraft :public Object
	{
	public:
		Cdeploy_aircraft();
		~Cdeploy_aircraft();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_aircraft); }
	};
}

using namespace n_deploy_aircraft;

#endif
