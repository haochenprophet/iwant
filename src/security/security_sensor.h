#ifndef SECURITY_SENSOR_H
#define SECURITY_SENSOR_H

#include "../object.h"

namespace n_security_sensor {
	class Csecurity_sensor :public Object
	{
	public:
		Csecurity_sensor();
		~Csecurity_sensor();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_sensor); }
	};
}

using namespace n_security_sensor;

#endif
