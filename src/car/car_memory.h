#ifndef CAR_MEMORY_H
#define CAR_MEMORY_H

#include "object/object.h"

namespace n_car_memory {
	class Ccar_memory :public Object
	{
	public:
		Ccar_memory();
		~Ccar_memory();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_memory); }
	};
}

using namespace n_car_memory;

#endif
