#ifndef DEPLOY_APP_H
#define DEPLOY_APP_H

#include "object/object.h"

namespace n_deploy_app {
	class Cdeploy_app :public Object
	{
	public:
		Cdeploy_app();
		~Cdeploy_app();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_app); }
	};
}

using namespace n_deploy_app;

#endif
