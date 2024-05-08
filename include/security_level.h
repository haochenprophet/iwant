#ifndef SECURITY_LEVEL_H
#define SECURITY_LEVEL_H

#include "../object.h"

namespace n_security_level {
	class Csecurity_level :public Object
	{
	public:
		Csecurity_level();
		~Csecurity_level();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_level); }
	};
}

using namespace n_security_level;

#endif
