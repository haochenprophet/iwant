#ifndef CAR_DISPLAYER_H
#define CAR_DISPLAYER_H

#include "../object.h"

namespace n_car_displayer {
	class Ccar_displayer :public Object
	{
	public:
		Ccar_displayer();
		~Ccar_displayer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_displayer); }
	};
}

using namespace n_car_displayer;

#endif
