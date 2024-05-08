#ifndef SECURITY_RIGHT_H
#define SECURITY_RIGHT_H

#include "../object.h"

namespace n_security_right {
	class Csecurity_right :public Object
	{
	public:
		Csecurity_right();
		~Csecurity_right();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_right); }
	};
}

using namespace n_security_right;

#endif
