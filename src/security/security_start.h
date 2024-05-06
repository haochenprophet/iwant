#ifndef SECURITY_START_H
#define SECURITY_START_H

#include "../object.h"

namespace n_security_start {
	class Csecurity_start :public Object
	{
	public:
		Csecurity_start();
		~Csecurity_start();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_start); }
	};
}

using namespace n_security_start;

#endif
