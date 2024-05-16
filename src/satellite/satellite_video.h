#ifndef SATELLITE_VIDEO_H
#define SATELLITE_VIDEO_H

#include "object/object.h"

namespace n_satellite_video {
	class Csatellite_video :public Object
	{
	public:
		Csatellite_video();
		~Csatellite_video();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_video); }
	};
}

using namespace n_satellite_video;

#endif
