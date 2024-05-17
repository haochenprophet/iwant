#ifndef DEPLOY_SO_H
#define DEPLOY_SO_H

#include "object/object.h"

namespace n_deploy_so {
	class Cdeploy_so :public Object
	{
	public:
		Cdeploy_so();
		~Cdeploy_so();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_so); }
	};
}

using namespace n_deploy_so;

#endif
