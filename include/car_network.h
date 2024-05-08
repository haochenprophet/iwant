#ifndef CAR_NETWORK_H
#define CAR_NETWORK_H

#include "../object.h"

namespace n_car_network {
	class Ccar_network :public Object
	{
	public:
		Ccar_network();
		~Ccar_network();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_network); }
	};
}

using namespace n_car_network;

#endif
