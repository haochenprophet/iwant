#ifndef SECURITY_OXYGEN_H
#define SECURITY_OXYGEN_H

#include "../object.h"

namespace n_security_oxygen {
	class Csecurity_oxygen :public Object
	{
	public:
		Csecurity_oxygen();
		~Csecurity_oxygen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_oxygen); }
	};
}

using namespace n_security_oxygen;

#endif
