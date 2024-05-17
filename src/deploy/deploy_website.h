#ifndef DEPLOY_WEBSITE_H
#define DEPLOY_WEBSITE_H

#include "object/object.h"

namespace n_deploy_website {
	class Cdeploy_website :public Object
	{
	public:
		Cdeploy_website();
		~Cdeploy_website();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_website); }
	};
}

using namespace n_deploy_website;

#endif
