#ifndef DEPLOY_MESSAGE_H
#define DEPLOY_MESSAGE_H

#include "object/object.h"

namespace n_deploy_message {
	class Cdeploy_message :public Object
	{
	public:
		Cdeploy_message();
		~Cdeploy_message();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_message); }
	};
}

using namespace n_deploy_message;

#endif
