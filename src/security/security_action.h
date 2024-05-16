#ifndef SECURITY_ACTION_H
#define SECURITY_ACTION_H

#include "object/object.h"

namespace n_security_action {
	class Csecurity_action :public Object
	{
	public:
		Csecurity_action();
		~Csecurity_action();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_action); }
	};
}

using namespace n_security_action;

#endif
