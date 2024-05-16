#ifndef SECURITY_FUTURE_H
#define SECURITY_FUTURE_H

#include "object/object.h"

namespace n_security_future {
	class Csecurity_future :public Object
	{
	public:
		Csecurity_future();
		~Csecurity_future();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_future); }
	};
}

using namespace n_security_future;

#endif
