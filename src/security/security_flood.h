#ifndef SECURITY_FLOOD_H
#define SECURITY_FLOOD_H

#include "object/object.h"

namespace n_security_flood {
	class Csecurity_flood :public Object
	{
	public:
		Csecurity_flood();
		~Csecurity_flood();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_flood); }
	};
}

using namespace n_security_flood;

#endif
