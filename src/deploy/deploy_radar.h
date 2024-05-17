#ifndef DEPLOY_RADAR_H
#define DEPLOY_RADAR_H

#include "object/object.h"

namespace n_deploy_radar {
	class Cdeploy_radar :public Object
	{
	public:
		Cdeploy_radar();
		~Cdeploy_radar();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_radar); }
	};
}

using namespace n_deploy_radar;

#endif
