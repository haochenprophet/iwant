#ifndef SECURITY_SPACE_H
#define SECURITY_SPACE_H

#include "../object.h"

namespace n_security_space {
	class Csecurity_space :public Object
	{
	public:
		Csecurity_space();
		~Csecurity_space();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_space); }
	};
}

using namespace n_security_space;

#endif
