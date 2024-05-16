#ifndef SECURITY_WARNING_H
#define SECURITY_WARNING_H

#include "object/object.h"

namespace n_security_warning {
	class Csecurity_warning :public Object
	{
	public:
		Csecurity_warning();
		~Csecurity_warning();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_warning); }
	};
}

using namespace n_security_warning;

#endif
