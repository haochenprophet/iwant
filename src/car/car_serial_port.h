#ifndef CAR_SERIAL_PORT_H
#define CAR_SERIAL_PORT_H

#include "../object.h"

namespace n_car_serial_port {
	class Ccar_serial_port :public Object
	{
	public:
		Ccar_serial_port();
		~Ccar_serial_port();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_serial_port); }
	};
}

using namespace n_car_serial_port;

#endif
