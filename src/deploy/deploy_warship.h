#ifndef DEPLOY_WARSHIP_H
#define DEPLOY_WARSHIP_H

#include "object/object.h"

namespace n_deploy_warship {
	class Cdeploy_warship :public Object
	{
	public:
		Cdeploy_warship();
		~Cdeploy_warship();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_warship); }
	};
}

using namespace n_deploy_warship;

#endif
