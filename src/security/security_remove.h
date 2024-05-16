#ifndef SECURITY_REMOVE_H
#define SECURITY_REMOVE_H

#include "object/object.h"

namespace n_security_remove {
	class Csecurity_remove :public Object
	{
	public:
		Csecurity_remove();
		~Csecurity_remove();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_remove); }
	};
}

using namespace n_security_remove;

#endif
