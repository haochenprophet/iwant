#ifndef CAR_COMMUNICATION_4G_H
#define CAR_COMMUNICATION_4G_H

#include "car_communication.h"

namespace n_car_communication_4G {
	class Ccar_communication_4G :public Ccar_communication
	{
	public:
		Ccar_communication_4G();
		~Ccar_communication_4G();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_communication_4G); }
	};
}

using namespace n_car_communication_4G;

#endif
