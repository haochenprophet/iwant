#ifndef SECURITY_OUTFIRE_H
#define SECURITY_OUTFIRE_H

#include "object/object.h"

namespace n_security_outfire {
	class Csecurity_outfire :public Object
	{
	public:
		Csecurity_outfire();
		~Csecurity_outfire();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_outfire); }
	};
}

using namespace n_security_outfire;

#endif
