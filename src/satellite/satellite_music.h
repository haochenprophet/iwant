#ifndef SATELLITE_MUSIC_H
#define SATELLITE_MUSIC_H

#include "object/object.h"

namespace n_satellite_music {
	class Csatellite_music :public Object
	{
	public:
		Csatellite_music();
		~Csatellite_music();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_music); }
	};
}

using namespace n_satellite_music;

#endif
