#ifndef SATELLITE_AUDIO_H
#define SATELLITE_AUDIO_H

#include "../object.h"

namespace n_satellite_audio {
	class Csatellite_audio :public Object
	{
	public:
		Csatellite_audio();
		~Csatellite_audio();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_audio); }
	};
}

using namespace n_satellite_audio;

#endif
