#ifndef PIN_H
#define PIN_H

#include "object/object.h"

namespace n_pin {
	class Cpin :public Object
	{
	public:
		Cpin();
		~Cpin();
		int my_init(void *p=nullptr);
	};
}

using namespace n_pin;

#endif
