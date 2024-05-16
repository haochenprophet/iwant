#ifndef SECURITY_BUG_H
#define SECURITY_BUG_H

#include "object/object.h"

namespace n_security_bug {
	class Csecurity_bug :public Object
	{
	public:
		Csecurity_bug();
		~Csecurity_bug();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_bug); }
	};
}

using namespace n_security_bug;

#endif
