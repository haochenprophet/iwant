#ifndef CAR_STATUS_H
#define CAR_STATUS_H

#include "object/object.h"

namespace n_car_status {
	class Ccar_status :public Object
	{
	public:
		Ccar_status();
		~Ccar_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_status); }
	};
}

using namespace n_car_status;

#endif
