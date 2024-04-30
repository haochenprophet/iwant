#ifndef MARS_AUDIO_H
#define MARS_AUDIO_H

#include "../object.h"

namespace n_mars_audio {
	class Cmars_audio :public Object
	{
	public:
		Cmars_audio();
		~Cmars_audio();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmars_audio); }
	};
}

using namespace n_mars_audio;

#endif
