#ifndef DEPLOY_MAKEFILE_H
#define DEPLOY_MAKEFILE_H

#include "object/object.h"

namespace n_deploy_makefile {
	class Cdeploy_makefile :public Object
	{
	public:
		Cdeploy_makefile();
		~Cdeploy_makefile();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_makefile); }
	};
}

using namespace n_deploy_makefile;

#endif
