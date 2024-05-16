#ifndef SECURITY_FRONT_H
#define SECURITY_FRONT_H

#include "object/object.h"

namespace n_security_front {
	class Csecurity_front :public Object
	{
	public:
		Csecurity_front();
		~Csecurity_front();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_front); }
	};
}

using namespace n_security_front;

#endif
