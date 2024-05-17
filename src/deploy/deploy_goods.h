#ifndef DEPLOY_GOODS_H
#define DEPLOY_GOODS_H

#include "object/object.h"

namespace n_deploy_goods {
	class Cdeploy_goods :public Object
	{
	public:
		Cdeploy_goods();
		~Cdeploy_goods();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_goods); }
	};
}

using namespace n_deploy_goods;

#endif
