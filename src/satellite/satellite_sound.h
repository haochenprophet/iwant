#ifndef SATELLITE_SOUND_H
#define SATELLITE_SOUND_H

#include "../object.h"

namespace n_satellite_sound {
	class Csatellite_sound :public Object
	{
	public:
		Csatellite_sound();
		~Csatellite_sound();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_sound); }
	};
}

using namespace n_satellite_sound;

#endif
