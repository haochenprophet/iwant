#ifndef DEPLOY_GUN_H
#define DEPLOY_GUN_H

#include "object/object.h"

namespace n_deploy_gun {
	class Cdeploy_gun :public Object
	{
	public:
		Cdeploy_gun();
		~Cdeploy_gun();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_gun); }
	};
}

using namespace n_deploy_gun;

#endif
