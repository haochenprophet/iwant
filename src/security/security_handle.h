#ifndef SECURITY_HANDLE_H
#define SECURITY_HANDLE_H

#include "object/object.h"

namespace n_security_handle {
	class Csecurity_handle :public Object
	{
	public:
		Csecurity_handle();
		~Csecurity_handle();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_handle); }
	};
}

using namespace n_security_handle;

#endif
