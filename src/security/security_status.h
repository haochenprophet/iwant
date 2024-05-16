#ifndef SECURITY_STATUS_H
#define SECURITY_STATUS_H

#include "object/object.h"

namespace n_security_status {
	class Csecurity_status :public Object
	{
	public:
		Csecurity_status();
		~Csecurity_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_status); }
	};
}

using namespace n_security_status;

#endif
