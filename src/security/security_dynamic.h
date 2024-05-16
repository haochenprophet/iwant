#ifndef SECURITY_DYNAMIC_H
#define SECURITY_DYNAMIC_H

#include "object/object.h"

namespace n_security_dynamic {
	class Csecurity_dynamic :public Object
	{
	public:
		Csecurity_dynamic();
		~Csecurity_dynamic();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_dynamic); }
	};
}

using namespace n_security_dynamic;

#endif
