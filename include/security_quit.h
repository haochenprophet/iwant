#ifndef SECURITY_QUIT_H
#define SECURITY_QUIT_H

#include "../object.h"

namespace n_security_quit {
	class Csecurity_quit :public Object
	{
	public:
		Csecurity_quit();
		~Csecurity_quit();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_quit); }
	};
}

using namespace n_security_quit;

#endif
