#ifndef SATELLITE_USB_PORT_H
#define SATELLITE_USB_PORT_H

#include "../object.h"

namespace n_satellite_usb_port {
	class Csatellite_usb_port :public Object
	{
	public:
		Csatellite_usb_port();
		~Csatellite_usb_port();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_usb_port); }
	};
}

using namespace n_satellite_usb_port;

#endif
