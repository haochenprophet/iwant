#ifndef SECURITY_COLD_H
#define SECURITY_COLD_H

#include "../object.h"

namespace n_security_cold {
	class Csecurity_cold :public Object
	{
	public:
		Csecurity_cold();
		~Csecurity_cold();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_cold); }
	};
}

using namespace n_security_cold;

#endif
