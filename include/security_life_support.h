#ifndef SECURITY_LIFE_SUPPORT_H
#define SECURITY_LIFE_SUPPORT_H

#include "../object.h"

namespace n_security_life_support {
	class Csecurity_life_support :public Object
	{
	public:
		Csecurity_life_support();
		~Csecurity_life_support();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_life_support); }
	};
}

using namespace n_security_life_support;

#endif
