#ifndef SECURITY_DRIVING_H
#define SECURITY_DRIVING_H

#include "object/object.h"

namespace n_security_driving {
	class Csecurity_driving :public Object
	{
	public:
		Csecurity_driving();
		~Csecurity_driving();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_driving); }
	};
}

using namespace n_security_driving;

#endif
