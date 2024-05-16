#ifndef CAR_SCHEME_H
#define CAR_SCHEME_H

#include "object/object.h"

namespace n_car_scheme {
	class Ccar_scheme :public Object
	{
	public:
		Ccar_scheme();
		~Ccar_scheme();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_scheme); }
	};
}

using namespace n_car_scheme;

#endif
