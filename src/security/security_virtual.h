#ifndef SECURITY_VIRTUAL_H
#define SECURITY_VIRTUAL_H

#include "object/object.h"

namespace n_security_virtual {
	class Csecurity_virtual :public Object
	{
	public:
		Csecurity_virtual();
		~Csecurity_virtual();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_virtual); }
	};
}

using namespace n_security_virtual;

#endif
