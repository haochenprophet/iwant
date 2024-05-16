#ifndef CAR_ESCAPE_H
#define CAR_ESCAPE_H

#include "object/object.h"

namespace n_car_escape {
	class Ccar_escape :public Object
	{
	public:
		Ccar_escape();
		~Ccar_escape();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_escape); }
	};
}

using namespace n_car_escape;

#endif
