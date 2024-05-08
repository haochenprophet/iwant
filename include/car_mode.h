#ifndef CAR_MODE_H
#define CAR_MODE_H

#include "../object.h"

namespace n_car_mode {
	class Ccar_mode :public Object
	{
	public:
		Ccar_mode();
		~Ccar_mode();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_mode); }
	};
}

using namespace n_car_mode;

#endif
