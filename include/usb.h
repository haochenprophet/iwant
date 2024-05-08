#ifndef USB_H
#define USB_H

#include "../object.h"

namespace n_usb {
	class Cusb :public Object
	{
	public:
		Cusb();
		~Cusb();
		int my_init(void *p=nullptr);
	};
}

using namespace n_usb;

#endif
