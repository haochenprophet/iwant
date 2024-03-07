#ifndef CAR_ENGINE_H
#define CAR_ENGINE_H

#include "../object.h"

namespace n_car_engine {
	class Ccar_engine :public Object
	{
	public:
		Ccar_engine();
		~Ccar_engine();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_engine); }
	};
}

using namespace n_car_engine;

#endif
