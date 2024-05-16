#ifndef SECURITY_RULE_H
#define SECURITY_RULE_H

#include "object/object.h"

namespace n_security_rule {
	class Csecurity_rule :public Object
	{
	public:
		Csecurity_rule();
		~Csecurity_rule();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_rule); }
	};
}

using namespace n_security_rule;

#endif
