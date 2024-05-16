#ifndef SECURITY_CLASS_H
#define SECURITY_CLASS_H

#include "object/object.h"

namespace n_security_class {
	class Csecurity_class :public Object
	{
	public:
		Csecurity_class();
		~Csecurity_class();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_class); }
	};
}

using namespace n_security_class;

#endif
