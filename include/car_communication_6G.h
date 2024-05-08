#ifndef CAR_COMMUNICATION_6G_H
#define CAR_COMMUNICATION_6G_H

#include "car_communication.h"

namespace n_car_communication_6G {
	class Ccar_communication_6G :public Ccar_communication
	{
	public:
		Ccar_communication_6G();
		~Ccar_communication_6G();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_communication_6G); }
	};
}

using namespace n_car_communication_6G;

#endif
