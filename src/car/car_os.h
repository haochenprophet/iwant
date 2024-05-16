#ifndef CAR_OS_H
#define CAR_OS_H

#include "object/object.h"

namespace n_car_os {
	class Ccar_os :public Object
	{
	public:
		Ccar_os();
		~Ccar_os();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_os); }
	};
}

using namespace n_car_os;

#endif
