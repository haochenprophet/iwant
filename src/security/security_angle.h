#ifndef SECURITY_ANGLE_H
#define SECURITY_ANGLE_H

#include "object/object.h"

namespace n_security_angle {
	class Csecurity_angle :public Object
	{
	public:
		Csecurity_angle();
		~Csecurity_angle();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_angle); }
	};
}

using namespace n_security_angle;

#endif
