#ifndef CAR_SOUND_H
#define CAR_SOUND_H

#include "../object.h"

namespace n_car_sound {
	class Ccar_sound :public Object
	{
	public:
		Ccar_sound();
		~Ccar_sound();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_sound); }
	};
}

using namespace n_car_sound;

#endif
