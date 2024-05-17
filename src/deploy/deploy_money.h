#ifndef DEPLOY_MONEY_H
#define DEPLOY_MONEY_H

#include "object/object.h"

namespace n_deploy_money {
	class Cdeploy_money :public Object
	{
	public:
		Cdeploy_money();
		~Cdeploy_money();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_money); }
	};
}

using namespace n_deploy_money;

#endif
