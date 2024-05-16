#ifndef SECURITY_RAIN_H
#define SECURITY_RAIN_H

#include "object/object.h"

namespace n_security_rain {
	class Csecurity_rain :public Object
	{
	public:
		Csecurity_rain();
		~Csecurity_rain();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_rain); }
	};
}

using namespace n_security_rain;

#endif
