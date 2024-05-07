#ifndef SECURITY_FIRE_H
#define SECURITY_FIRE_H

#include "../object.h"

namespace n_security_fire {
	class Csecurity_fire :public Object
	{
	public:
		Csecurity_fire();
		~Csecurity_fire();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_fire); }
	};
}

using namespace n_security_fire;

#endif
