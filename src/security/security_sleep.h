#ifndef SECURITY_SLEEP_H
#define SECURITY_SLEEP_H

#include "object/object.h"

namespace n_security_sleep {
	class Csecurity_sleep :public Object
	{
	public:
		Csecurity_sleep();
		~Csecurity_sleep();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_sleep); }
	};
}

using namespace n_security_sleep;

#endif
