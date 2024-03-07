#ifndef CAR_AUDIO_H
#define CAR_AUDIO_H

#include "../object.h"

namespace n_car_audio {
	class Ccar_audio :public Object
	{
	public:
		Ccar_audio();
		~Ccar_audio();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_audio); }
	};
}

using namespace n_car_audio;

#endif
