#ifndef SECURITY_REALTIME_H
#define SECURITY_REALTIME_H

#include "object/object.h"

namespace n_security_realtime {
	class Csecurity_realtime :public Object
	{
	public:
		Csecurity_realtime();
		~Csecurity_realtime();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_realtime); }
	};
}

using namespace n_security_realtime;

#endif
