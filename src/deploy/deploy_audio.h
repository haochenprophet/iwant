#ifndef DEPLOY_AUDIO_H
#define DEPLOY_AUDIO_H

#include "object/object.h"

namespace n_deploy_audio {
	class Cdeploy_audio :public Object
	{
	public:
		Cdeploy_audio();
		~Cdeploy_audio();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cdeploy_audio); }
	};
}

using namespace n_deploy_audio;

#endif
