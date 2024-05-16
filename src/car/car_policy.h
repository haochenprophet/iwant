#ifndef CAR_POLICY_H
#define CAR_POLICY_H

#include "object/object.h"

namespace n_car_policy {
	class Ccar_policy :public Object
	{
	public:
		Ccar_policy();
		~Ccar_policy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_policy); }
	};
}

using namespace n_car_policy;

#endif
