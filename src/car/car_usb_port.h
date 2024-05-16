#ifndef CAR_USB_PORT_H
#define CAR_USB_PORT_H

#include "object/object.h"

namespace n_car_usb_port {
	class Ccar_usb_port :public Object
	{
	public:
		Ccar_usb_port();
		~Ccar_usb_port();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_usb_port); }
	};
}

using namespace n_car_usb_port;

#endif
