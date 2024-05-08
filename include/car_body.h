#ifndef CAR_BODY_H
#define CAR_BODY_H

#include "../object.h"

namespace n_car_body {
	class Ccar_body :public Object
	{
	public:
		Ccar_body();
		~Ccar_body();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_body); }
	};
}

using namespace n_car_body;

#endif
