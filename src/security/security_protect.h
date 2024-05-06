#ifndef SECURITY_PROTECT_H
#define SECURITY_PROTECT_H

#include "../object.h"

namespace n_security_protect {
	class Csecurity_protect :public Object
	{
	public:
		Csecurity_protect();
		~Csecurity_protect();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_protect); }
	};
}

using namespace n_security_protect;

#endif
