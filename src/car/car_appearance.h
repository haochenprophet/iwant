#ifndef CAR_APPEARANCE_H
#define CAR_APPEARANCE_H

#include "object/object.h"

namespace n_car_appearance {
	class Ccar_appearance :public Object
	{
	public:
		Ccar_appearance();
		~Ccar_appearance();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_appearance); }
	};
}

using namespace n_car_appearance;

#endif
