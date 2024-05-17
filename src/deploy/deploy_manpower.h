#ifndef DEPLOY_MANPOWER_H
#define DEPLOY_MANPOWER_H

#include "object/object.h"

namespace n_deploy_manpower {
	class Cdeploy_manpower :public Object
	{
	public:
		Cdeploy_manpower();
		~Cdeploy_manpower();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_manpower); }
	};
}

using namespace n_deploy_manpower;

#endif
