#ifndef CAR_VECTOR_H
#define CAR_VECTOR_H

#include "object/object.h"

namespace n_car_vector {
	class Ccar_vector :public Object
	{
	public:
		Ccar_vector();
		~Ccar_vector();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_vector); }
	};
}

using namespace n_car_vector;

#endif
