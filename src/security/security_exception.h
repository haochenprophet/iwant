#ifndef SECURITY_EXCEPTION_H
#define SECURITY_EXCEPTION_H

#include "object/object.h"

namespace n_security_exception {
	class Csecurity_exception :public Object
	{
	public:
		Csecurity_exception();
		~Csecurity_exception();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_exception); }
	};
}

using namespace n_security_exception;

#endif
