#ifndef CAR_AIR_H
#define CAR_AIR_H

#include "../object.h"

namespace n_car_air {
	class Ccar_air :public Object
	{
	public:
		Ccar_air();
		~Ccar_air();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_air); }
	};
}

using namespace n_car_air;

#endif
