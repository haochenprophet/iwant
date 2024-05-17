#ifndef DEPLOY_LIST_H
#define DEPLOY_LIST_H

#include "object/object.h"

namespace n_deploy_list {
	class Cdeploy_list :public Object
	{
	public:
		Cdeploy_list();
		~Cdeploy_list();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_list); }
	};
}

using namespace n_deploy_list;

#endif
