#ifndef DEPLOY_OBJECT_H
#define DEPLOY_OBJECT_H

#include "object/object.h"

namespace n_deploy_object {
	class Cdeploy_object :public Object
	{
	public:
		Cdeploy_object();
		~Cdeploy_object();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_object); }
	};
}

using namespace n_deploy_object;

#endif
