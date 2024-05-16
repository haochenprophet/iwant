#ifndef SECURITY_HEAT_H
#define SECURITY_HEAT_H

#include "object/object.h"

namespace n_security_heat {
	class Csecurity_heat :public Object
	{
	public:
		Csecurity_heat();
		~Csecurity_heat();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_heat); }
	};
}

using namespace n_security_heat;

#endif
