#ifndef SECURITY_CRUISE_H
#define SECURITY_CRUISE_H

#include "../object.h"

namespace n_security_cruise {
	class Csecurity_cruise :public Object
	{
	public:
		Csecurity_cruise();
		~Csecurity_cruise();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_cruise); }
	};
}

using namespace n_security_cruise;

#endif
