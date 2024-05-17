#ifndef DEPLOY_LIB_H
#define DEPLOY_LIB_H

#include "object/object.h"

namespace n_deploy_lib {
	class Cdeploy_lib :public Object
	{
	public:
		Cdeploy_lib();
		~Cdeploy_lib();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_lib); }
	};
}

using namespace n_deploy_lib;

#endif
