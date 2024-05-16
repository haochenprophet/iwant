#ifndef OCEAN_VIDEO_H
#define OCEAN_VIDEO_H

#include "object/object.h"

namespace n_ocean_video {
	class Cocean_video :public Object
	{
	public:
		Cocean_video();
		~Cocean_video();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_video); }
	};
}

using namespace n_ocean_video;

#endif
