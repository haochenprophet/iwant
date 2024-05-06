#ifndef SECURITY_PHYSICAL_H
#define SECURITY_PHYSICAL_H

#include "../object.h"

namespace n_security_physical {
	class Csecurity_physical :public Object
	{
	public:
		Csecurity_physical();
		~Csecurity_physical();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_physical); }
	};
}

using namespace n_security_physical;

#endif
