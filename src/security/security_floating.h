#ifndef SECURITY_FLOATING_H
#define SECURITY_FLOATING_H

#include "object/object.h"

namespace n_security_floating {
	class Csecurity_floating :public Object
	{
	public:
		Csecurity_floating();
		~Csecurity_floating();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_floating); }
	};
}

using namespace n_security_floating;

#endif
