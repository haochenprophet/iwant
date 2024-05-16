#ifndef SECURITY_CONTROL_H
#define SECURITY_CONTROL_H

#include "object/object.h"

namespace n_security_control {
	class Csecurity_control :public Object
	{
	public:
		Csecurity_control();
		~Csecurity_control();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_control); }
	};
}

using namespace n_security_control;

#endif
