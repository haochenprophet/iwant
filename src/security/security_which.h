#ifndef SECURITY_WHICH_H
#define SECURITY_WHICH_H

#include "object/object.h"

namespace n_security_which {
	class Csecurity_which :public Object
	{
	public:
		Csecurity_which();
		~Csecurity_which();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_which); }
	};
}

using namespace n_security_which;

#endif
