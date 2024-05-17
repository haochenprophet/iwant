#ifndef DEPLOY_KO_H
#define DEPLOY_KO_H

#include "object/object.h"

namespace n_deploy_ko {
	class Cdeploy_ko :public Object
	{
	public:
		Cdeploy_ko();
		~Cdeploy_ko();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_ko); }
	};
}

using namespace n_deploy_ko;

#endif
