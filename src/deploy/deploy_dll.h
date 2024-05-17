#ifndef DEPLOY_DLL_H
#define DEPLOY_DLL_H

#include "object/object.h"

namespace n_deploy_dll {
	class Cdeploy_dll :public Object
	{
	public:
		Cdeploy_dll();
		~Cdeploy_dll();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_dll); }
	};
}

using namespace n_deploy_dll;

#endif
