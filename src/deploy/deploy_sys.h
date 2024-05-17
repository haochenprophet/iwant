#ifndef DEPLOY_SYS_H
#define DEPLOY_SYS_H

#include "object/object.h"

namespace n_deploy_sys {
	class Cdeploy_sys :public Object
	{
	public:
		Cdeploy_sys();
		~Cdeploy_sys();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_sys); }
	};
}

using namespace n_deploy_sys;

#endif
