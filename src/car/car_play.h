#ifndef CAR_PLAY_H
#define CAR_PLAY_H

#include "object/object.h"

namespace n_car_play {
	class Ccar_play :public Object
	{
	public:
		Ccar_play();
		~Ccar_play();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_play); }
	};
}

using namespace n_car_play;

#endif
