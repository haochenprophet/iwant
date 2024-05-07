#ifndef SECURITY_INTERRUPT_H
#define SECURITY_INTERRUPT_H

#include "../object.h"

namespace n_security_interrupt {
	class Csecurity_interrupt :public Object
	{
	public:
		Csecurity_interrupt();
		~Csecurity_interrupt();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_interrupt); }
	};
}

using namespace n_security_interrupt;

#endif
