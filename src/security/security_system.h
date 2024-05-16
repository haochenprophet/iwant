#ifndef SECURITY_SYSTEM_H
#define SECURITY_SYSTEM_H

#include "object/object.h"

namespace n_security_system {
	class Csecurity_system :public Object
	{
	public:
		Csecurity_system();
		~Csecurity_system();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_system); }
	};
}

using namespace n_security_system;

#endif
