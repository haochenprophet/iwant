#ifndef SECURITY_TYPE_H
#define SECURITY_TYPE_H

#include "object/object.h"

namespace n_security_type {
	class Csecurity_type :public Object
	{
	public:
		Csecurity_type();
		~Csecurity_type();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_type); }
	};
}

using namespace n_security_type;

#endif
