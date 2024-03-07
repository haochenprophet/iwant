#ifndef CAR_MAP_H
#define CAR_MAP_H

#include "../object.h"

namespace n_car_map {
	class Ccar_map :public Object
	{
	public:
		Ccar_map();
		~Ccar_map();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_map); }
	};
}

using namespace n_car_map;

#endif
