#ifndef SECURITY_CAR_H
#define SECURITY_CAR_H

#include "object/object.h"

namespace n_security_car {
	class Csecurity_car :public Object
	{
	public:
		Csecurity_car();
		~Csecurity_car();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_car); }
	};
}

using namespace n_security_car;

#endif
