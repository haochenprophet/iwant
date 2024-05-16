#ifndef SECURITY_RUN_H
#define SECURITY_RUN_H

#include "object/object.h"

namespace n_security_run {
	class Csecurity_run :public Object
	{
	public:
		Csecurity_run();
		~Csecurity_run();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_run); }
	};
}

using namespace n_security_run;

#endif
