#ifndef SECURITY_BEHAVIOR_H
#define SECURITY_BEHAVIOR_H

#include "../object.h"

namespace n_security_behavior {
	class Csecurity_behavior :public Object
	{
	public:
		Csecurity_behavior();
		~Csecurity_behavior();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_behavior); }
	};
}

using namespace n_security_behavior;

#endif
