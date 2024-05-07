#ifndef SECURITY_BELT_H
#define SECURITY_BELT_H

#include "../object.h"

namespace n_security_belt {
	class Csecurity_belt :public Object
	{
	public:
		Csecurity_belt();
		~Csecurity_belt();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_belt); }
	};
}

using namespace n_security_belt;

#endif
