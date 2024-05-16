#ifndef SECURITY_LEFT_H
#define SECURITY_LEFT_H

#include "object/object.h"

namespace n_security_left {
	class Csecurity_left :public Object
	{
	public:
		Csecurity_left();
		~Csecurity_left();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_left); }
	};
}

using namespace n_security_left;

#endif
