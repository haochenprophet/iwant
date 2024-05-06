#ifndef SECURITY_EXIT_H
#define SECURITY_EXIT_H

#include "../object.h"

namespace n_security_exit {
	class Csecurity_exit :public Object
	{
	public:
		Csecurity_exit();
		~Csecurity_exit();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_exit); }
	};
}

using namespace n_security_exit;

#endif
