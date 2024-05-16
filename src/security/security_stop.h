#ifndef SECURITY_STOP_H
#define SECURITY_STOP_H

#include "object/object.h"

namespace n_security_stop {
	class Csecurity_stop :public Object
	{
	public:
		Csecurity_stop();
		~Csecurity_stop();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_stop); }
	};
}

using namespace n_security_stop;

#endif
