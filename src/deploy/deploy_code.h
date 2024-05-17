#ifndef DEPLOY_CODE_H
#define DEPLOY_CODE_H

#include "object/object.h"

namespace n_deploy_code {
	class Cdeploy_code :public Object
	{
	public:
		Cdeploy_code();
		~Cdeploy_code();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_code); }
	};
}

using namespace n_deploy_code;

#endif
