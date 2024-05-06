#ifndef SECURITY_MODE_H
#define SECURITY_MODE_H

#include "../object.h"

namespace n_security_mode {
	class Csecurity_mode :public Object
	{
	public:
		Csecurity_mode();
		~Csecurity_mode();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_mode); }
	};
}

using namespace n_security_mode;

#endif
