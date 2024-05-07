#ifndef SECURITY_PLAN_H
#define SECURITY_PLAN_H

#include "../object.h"

namespace n_security_plan {
	class Csecurity_plan :public Object
	{
	public:
		Csecurity_plan();
		~Csecurity_plan();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_plan); }
	};
}

using namespace n_security_plan;

#endif
