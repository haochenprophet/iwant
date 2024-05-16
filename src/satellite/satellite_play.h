#ifndef SATELLITE_PLAY_H
#define SATELLITE_PLAY_H

#include "object/object.h"

namespace n_satellite_play {
	class Csatellite_play :public Object
	{
	public:
		Csatellite_play();
		~Csatellite_play();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_play); }
	};
}

using namespace n_satellite_play;

#endif
