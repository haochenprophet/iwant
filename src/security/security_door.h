#ifndef SECURITY_DOOR_H
#define SECURITY_DOOR_H

#include "object/object.h"

namespace n_security_door {
	class Csecurity_door :public Object
	{
	public:
		Csecurity_door();
		~Csecurity_door();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_door); }
	};
}

using namespace n_security_door;

#endif
