#ifndef CAR_COLOUR_H
#define CAR_COLOUR_H

#include "../object.h"

namespace n_car_colour {
	class Ccar_colour :public Object
	{
	public:
		Ccar_colour();
		~Ccar_colour();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_colour); }
	};
}

using namespace n_car_colour;

#endif
