#ifndef DEPLOY_VIDEO_H
#define DEPLOY_VIDEO_H

#include "object/object.h"

namespace n_deploy_video {
	class Cdeploy_video :public Object
	{
	public:
		Cdeploy_video();
		~Cdeploy_video();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_video); }
	};
}

using namespace n_deploy_video;

#endif
