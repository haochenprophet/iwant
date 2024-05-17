#ifndef DEPLOY_ARMY_H
#define DEPLOY_ARMY_H

#include "object/object.h"

namespace n_deploy_army {
	class Cdeploy_army :public Object
	{
	public:
		Cdeploy_army();
		~Cdeploy_army();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_army); }
	};
}

using namespace n_deploy_army;

#endif
