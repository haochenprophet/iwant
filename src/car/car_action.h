#ifndef CAR_ACTION_H
#define CAR_ACTION_H

#include "../object.h"

namespace n_car_action {
	class Ccar_action :public Object
	{
	public:
		Ccar_action();
		~Ccar_action();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_action); }
	};
}

using namespace n_car_action;

#endif
