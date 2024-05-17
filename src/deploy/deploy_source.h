#ifndef DEPLOY_SOURCE_H
#define DEPLOY_SOURCE_H

#include "object/object.h"

namespace n_deploy_source {
	class Cdeploy_source :public Object
	{
	public:
		Cdeploy_source();
		~Cdeploy_source();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_source); }
	};
}

using namespace n_deploy_source;

#endif
