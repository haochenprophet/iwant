#ifndef CAR_ENVIRONMENT_H
#define CAR_ENVIRONMENT_H

#include "object/object.h"

namespace n_car_environment {
	class Ccar_environment :public Object
	{
	public:
		Ccar_environment();
		~Ccar_environment();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_environment); }
	};
}

using namespace n_car_environment;

#endif
