#ifndef SECURITY_HOME_H
#define SECURITY_HOME_H

#include "../object.h"

namespace n_security_home {
	class Csecurity_home :public Object
	{
	public:
		Csecurity_home();
		~Csecurity_home();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_home); }
	};
}

using namespace n_security_home;

#endif
