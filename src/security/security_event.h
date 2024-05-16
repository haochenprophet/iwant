#ifndef SECURITY_EVENT_H
#define SECURITY_EVENT_H

#include "object/object.h"

namespace n_security_event {
	class Csecurity_event :public Object
	{
	public:
		Csecurity_event();
		~Csecurity_event();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_event); }
	};
}

using namespace n_security_event;

#endif
