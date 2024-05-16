#ifndef SECURITY_DIRECTION_H
#define SECURITY_DIRECTION_H

#include "object/object.h"

namespace n_security_direction {
	class Csecurity_direction :public Object
	{
	public:
		Csecurity_direction();
		~Csecurity_direction();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_direction); }
	};
}

using namespace n_security_direction;

#endif
