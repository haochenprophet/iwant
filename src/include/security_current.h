#ifndef SECURITY_CURRENT_H
#define SECURITY_CURRENT_H

#include "../object.h"

namespace n_security_current {
	class Csecurity_current :public Object
	{
	public:
		Csecurity_current();
		~Csecurity_current();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_current); }
	};
}

using namespace n_security_current;

#endif
