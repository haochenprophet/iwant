#ifndef SECURITY_CONDITION_H
#define SECURITY_CONDITION_H

#include "../object.h"

namespace n_security_condition {
	class Csecurity_condition :public Object
	{
	public:
		Csecurity_condition();
		~Csecurity_condition();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_condition); }
	};
}

using namespace n_security_condition;

#endif
