#ifndef SECURITY_MANAGE_H
#define SECURITY_MANAGE_H

#include "object/object.h"

namespace n_security_manage {
	class Csecurity_manage :public Object
	{
	public:
		Csecurity_manage();
		~Csecurity_manage();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_manage); }
	};
}

using namespace n_security_manage;

#endif
