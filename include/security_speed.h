#ifndef SECURITY_SPEED_H
#define SECURITY_SPEED_H

#include "../object.h"

namespace n_security_speed {
	class Csecurity_speed :public Object
	{
	public:
		Csecurity_speed();
		~Csecurity_speed();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_speed); }
	};
}

using namespace n_security_speed;

#endif
