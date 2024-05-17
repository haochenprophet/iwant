#ifndef DEPLOY_BIN_H
#define DEPLOY_BIN_H

#include "object/object.h"

namespace n_deploy_bin {
	class Cdeploy_bin :public Object
	{
	public:
		Cdeploy_bin();
		~Cdeploy_bin();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_bin); }
	};
}

using namespace n_deploy_bin;

#endif
