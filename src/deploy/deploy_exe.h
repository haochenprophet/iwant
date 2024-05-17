#ifndef DEPLOY_EXE_H
#define DEPLOY_EXE_H

#include "object/object.h"

namespace n_deploy_exe {
	class Cdeploy_exe :public Object
	{
	public:
		Cdeploy_exe();
		~Cdeploy_exe();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_exe); }
	};
}

using namespace n_deploy_exe;

#endif
