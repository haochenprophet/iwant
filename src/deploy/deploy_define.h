#ifndef DEPLOY_DEFINE_H
#define DEPLOY_DEFINE_H

#include "object/object.h"

namespace n_deploy_define {
	class Cdeploy_define :public Object
	{
	public:
		Cdeploy_define();
		~Cdeploy_define();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_define); }
	};
}

using namespace n_deploy_define;

#endif
