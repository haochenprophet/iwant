#ifndef CAR_LOGO_H
#define CAR_LOGO_H

#include "object/object.h"

namespace n_car_logo {
	class Ccar_logo :public Object
	{
	public:
		Ccar_logo();
		~Ccar_logo();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_logo); }
	};
}

using namespace n_car_logo;

#endif
