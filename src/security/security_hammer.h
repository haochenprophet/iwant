#ifndef SECURITY_HAMMER_H
#define SECURITY_HAMMER_H

#include "../object.h"

namespace n_security_hammer {
	class Csecurity_hammer :public Object
	{
	public:
		Csecurity_hammer();
		~Csecurity_hammer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_hammer); }
	};
}

using namespace n_security_hammer;

#endif
