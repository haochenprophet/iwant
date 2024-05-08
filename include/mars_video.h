#ifndef MARS_VIDEO_H
#define MARS_VIDEO_H

#include "../object.h"

namespace n_mars_video {
	class Cmars_video :public Object
	{
	public:
		Cmars_video();
		~Cmars_video();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_video); }
	};
}

using namespace n_mars_video;

#endif
