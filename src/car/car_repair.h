#ifndef CAR_REPAIR_H
#define CAR_REPAIR_H

#include "object/object.h"

namespace n_car_repair {
	class Ccar_repair :public Object
	{
	public:
		Ccar_repair();
		~Ccar_repair();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_repair); }
	};
}

using namespace n_car_repair;

#endif
