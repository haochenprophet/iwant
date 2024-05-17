#ifndef DEPLOY_CAR_H
#define DEPLOY_CAR_H

#include "object/object.h"

namespace n_deploy_car {
	class Cdeploy_car :public Object
	{
	public:
		Cdeploy_car();
		~Cdeploy_car();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_car); }
	};
}

using namespace n_deploy_car;

#endif
