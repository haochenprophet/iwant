#ifndef CAR_WEAPONS_H
#define CAR_WEAPONS_H

#include "../object.h"

namespace n_car_weapons {
	class Ccar_weapons :public Object
	{
	public:
		Ccar_weapons();
		~Ccar_weapons();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_weapons); }
	};
}

using namespace n_car_weapons;

#endif
