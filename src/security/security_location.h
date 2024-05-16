#ifndef SECURITY_LOCATION_H
#define SECURITY_LOCATION_H

#include "object/object.h"

namespace n_security_location {
	class Csecurity_location :public Object
	{
	public:
		Csecurity_location();
		~Csecurity_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_location); }
	};
}

using namespace n_security_location;

#endif
