#ifndef CAR_WARNING_H
#define CAR_WARNING_H

#include "object/object.h"

namespace n_car_warning {
	class Ccar_warning :public Object
	{
	public:
		Ccar_warning();
		~Ccar_warning();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_warning); }
	};
}

using namespace n_car_warning;

#endif
