#ifndef SECURITY_BOTTOM_H
#define SECURITY_BOTTOM_H

#include "object/object.h"

namespace n_security_bottom {
	class Csecurity_bottom :public Object
	{
	public:
		Csecurity_bottom();
		~Csecurity_bottom();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_bottom); }
	};
}

using namespace n_security_bottom;

#endif
