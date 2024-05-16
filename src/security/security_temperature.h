#ifndef SECURITY_TEMPERATURE_H
#define SECURITY_TEMPERATURE_H

#include "object/object.h"

namespace n_security_temperature {
	class Csecurity_temperature :public Object
	{
	public:
		Csecurity_temperature();
		~Csecurity_temperature();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_temperature); }
	};
}

using namespace n_security_temperature;

#endif
