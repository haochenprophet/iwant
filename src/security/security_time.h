#ifndef SECURITY_TIME_H
#define SECURITY_TIME_H

#include "object/object.h"

namespace n_security_time {
	class Csecurity_time :public Object
	{
	public:
		Csecurity_time();
		~Csecurity_time();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_time); }
	};
}

using namespace n_security_time;

#endif
