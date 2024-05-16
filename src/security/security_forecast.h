#ifndef SECURITY_FORECAST_H
#define SECURITY_FORECAST_H

#include "object/object.h"

namespace n_security_forecast {
	class Csecurity_forecast :public Object
	{
	public:
		Csecurity_forecast();
		~Csecurity_forecast();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_forecast); }
	};
}

using namespace n_security_forecast;

#endif
