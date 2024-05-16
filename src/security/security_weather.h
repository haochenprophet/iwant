#ifndef SECURITY_WEATHER_H
#define SECURITY_WEATHER_H

#include "object/object.h"

namespace n_security_weather {
	class Csecurity_weather :public Object
	{
	public:
		Csecurity_weather();
		~Csecurity_weather();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_weather); }
	};
}

using namespace n_security_weather;

#endif
