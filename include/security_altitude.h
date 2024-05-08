#ifndef SECURITY_ALTITUDE_H
#define SECURITY_ALTITUDE_H

#include "../object.h"

namespace n_security_altitude {
	class Csecurity_altitude :public Object
	{
	public:
		Csecurity_altitude();
		~Csecurity_altitude();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_altitude); }
	};
}

using namespace n_security_altitude;

#endif
