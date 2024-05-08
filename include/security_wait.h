#ifndef SECURITY_WAIT_H
#define SECURITY_WAIT_H

#include "../object.h"

namespace n_security_wait {
	class Csecurity_wait :public Object
	{
	public:
		Csecurity_wait();
		~Csecurity_wait();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_wait); }
	};
}

using namespace n_security_wait;

#endif
