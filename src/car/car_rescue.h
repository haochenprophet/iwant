#ifndef CAR_RESCUE_H
#define CAR_RESCUE_H

#include "../object.h"

namespace n_car_rescue {
	class Ccar_rescue :public Object
	{
	public:
		Ccar_rescue();
		~Ccar_rescue();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_rescue); }
	};
}

using namespace n_car_rescue;

#endif
