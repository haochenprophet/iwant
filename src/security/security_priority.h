#ifndef SECURITY_PRIORITY_H
#define SECURITY_PRIORITY_H

#include "object/object.h"

namespace n_security_priority {
	class Csecurity_priority :public Object
	{
	public:
		Csecurity_priority();
		~Csecurity_priority();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_priority); }
	};
}

using namespace n_security_priority;

#endif
