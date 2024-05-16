#ifndef SECURITY_POLICY_H
#define SECURITY_POLICY_H

#include "object/object.h"

namespace n_security_policy {
	class Csecurity_policy :public Object
	{
	public:
		Csecurity_policy();
		~Csecurity_policy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_policy); }
	};
}

using namespace n_security_policy;

#endif
