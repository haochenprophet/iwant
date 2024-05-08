#ifndef SECURITY_H
#define SECURITY_H

#include "../object.h"

namespace n_security {
	class Csecurity :public Object
	{
	public:
		Csecurity();
		~Csecurity();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity); }
	};
}

using namespace n_security;

#endif
