#ifndef SECURITY_REPAIR_H
#define SECURITY_REPAIR_H

#include "object/object.h"

namespace n_security_repair {
	class Csecurity_repair :public Object
	{
	public:
		Csecurity_repair();
		~Csecurity_repair();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_repair); }
	};
}

using namespace n_security_repair;

#endif
