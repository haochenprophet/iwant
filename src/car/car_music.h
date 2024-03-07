#ifndef CAR_MUSIC_H
#define CAR_MUSIC_H

#include "../object.h"

namespace n_car_music {
	class Ccar_music :public Object
	{
	public:
		Ccar_music();
		~Ccar_music();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_music); }
	};
}

using namespace n_car_music;

#endif
