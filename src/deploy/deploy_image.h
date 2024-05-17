#ifndef DEPLOY_IMAGE_H
#define DEPLOY_IMAGE_H

#include "object/object.h"

namespace n_deploy_image {
	class Cdeploy_image :public Object
	{
	public:
		Cdeploy_image();
		~Cdeploy_image();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_image); }
	};
}

using namespace n_deploy_image;

#endif
