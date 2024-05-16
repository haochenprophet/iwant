#ifndef CAR_AI_H
#define CAR_AI_H

#include "object/object.h"

namespace n_car_ai {
	class Ccar_ai :public Object
	{
	public:
		Ccar_ai();
		~Ccar_ai();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_ai); }
	};
}

using namespace n_car_ai;

#endif
