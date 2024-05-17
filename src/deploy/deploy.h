#ifndef DEPLOY_H
#define DEPLOY_H

#include "object/object.h"

namespace n_deploy {
	class Cdeploy :public Object
	{
	public:
		Cdeploy();
		~Cdeploy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy); }
	};
}

using namespace n_deploy;

#endif
