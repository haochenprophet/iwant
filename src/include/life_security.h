#ifndef LIFE_SECURITY_H
#define LIFE_SECURITY_H

#include "../object.h"

namespace n_life_security {
	class Clife_security :public Object
	{
	public:
		Clife_security();
		~Clife_security();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_security); }
	};
}

using namespace n_life_security;

#endif
