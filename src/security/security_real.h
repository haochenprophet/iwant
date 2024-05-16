#ifndef SECURITY_REAL_H
#define SECURITY_REAL_H

#include "object/object.h"

namespace n_security_real {
	class Csecurity_real :public Object
	{
	public:
		Csecurity_real();
		~Csecurity_real();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_real); }
	};
}

using namespace n_security_real;

#endif
