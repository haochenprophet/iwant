#ifndef SECURITY_LOCK_H
#define SECURITY_LOCK_H

#include "../object.h"

namespace n_security_lock {
	class Csecurity_lock :public Object
	{
	public:
		Csecurity_lock();
		~Csecurity_lock();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_lock); }
	};
}

using namespace n_security_lock;

#endif
