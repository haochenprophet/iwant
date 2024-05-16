#ifndef SECURITY_AIR_PRESSURE_H
#define SECURITY_AIR_PRESSURE_H

#include "object/object.h"

namespace n_security_air_pressure {
	class Csecurity_air_pressure :public Object
	{
	public:
		Csecurity_air_pressure();
		~Csecurity_air_pressure();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_air_pressure); }
	};
}

using namespace n_security_air_pressure;

#endif
