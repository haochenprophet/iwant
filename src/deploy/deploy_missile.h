#ifndef DEPLOY_MISSILE_H
#define DEPLOY_MISSILE_H

#include "object/object.h"

namespace n_deploy_missile {
	class Cdeploy_missile :public Object
	{
	public:
		Cdeploy_missile();
		~Cdeploy_missile();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_missile); }
	};
}

using namespace n_deploy_missile;

#endif
