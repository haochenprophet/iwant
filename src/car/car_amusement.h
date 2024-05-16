#ifndef CAR_AMUSEMENT_H
#define CAR_AMUSEMENT_H

#include "object/object.h"

namespace n_car_amusement {
	class Ccar_amusement :public Object
	{
	public:
		Ccar_amusement();
		~Ccar_amusement();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_amusement); }
	};
}

using namespace n_car_amusement;

#endif
