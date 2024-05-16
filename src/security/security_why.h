#ifndef SECURITY_WHY_H
#define SECURITY_WHY_H

#include "object/object.h"

namespace n_security_why {
	class Csecurity_why :public Object
	{
	public:
		Csecurity_why();
		~Csecurity_why();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_why); }
	};
}

using namespace n_security_why;

#endif
