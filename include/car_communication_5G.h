#ifndef CAR_COMMUNICATION_5G_H
#define CAR_COMMUNICATION_5G_H

#include "car_communication.h"

namespace n_car_communication_5G {
	class Ccar_communication_5G :public Ccar_communication
	{
	public:
		Ccar_communication_5G();
		~Ccar_communication_5G();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_communication_5G); }
	};
}

using namespace n_car_communication_5G;

#endif
