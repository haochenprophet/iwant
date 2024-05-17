#ifndef DEPLOY_DATA_H
#define DEPLOY_DATA_H

#include "object/object.h"

namespace n_deploy_data {
	class Cdeploy_data :public Object
	{
	public:
		Cdeploy_data();
		~Cdeploy_data();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_data); }
	};
}

using namespace n_deploy_data;

#endif
