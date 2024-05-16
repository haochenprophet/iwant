#ifndef CAR_ABOUT_H
#define CAR_ABOUT_H

#include "object/object.h"

namespace n_car_about {
	class Ccar_about :public Object
	{
	public:
		Ccar_about();
		~Ccar_about();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_about); }
	};
}

using namespace n_car_about;

#endif
