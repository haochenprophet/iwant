#ifndef CAR_PROJECTOR_H
#define CAR_PROJECTOR_H

#include "object/object.h"

namespace n_car_projector {
	class Ccar_projector :public Object
	{
	public:
		Ccar_projector();
		~Ccar_projector();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_projector); }
	};
}

using namespace n_car_projector;

#endif
