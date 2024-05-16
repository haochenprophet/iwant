#ifndef SECURITY_CHECK_H
#define SECURITY_CHECK_H

#include "object/object.h"

namespace n_security_check {
	class Csecurity_check :public Object
	{
	public:
		Csecurity_check();
		~Csecurity_check();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_check); }
	};
}

using namespace n_security_check;

#endif
