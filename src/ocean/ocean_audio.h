#ifndef OCEAN_AUDIO_H
#define OCEAN_AUDIO_H

#include "object/object.h"

namespace n_ocean_audio {
	class Cocean_audio :public Object
	{
	public:
		Cocean_audio();
		~Cocean_audio();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_audio); }
	};
}

using namespace n_ocean_audio;

#endif
