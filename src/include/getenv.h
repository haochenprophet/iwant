#ifndef GETENV_H
#define GETENV_H

#include "../object.h"

namespace n_getenv {
	class Cgetenv :public Object
	{
	public:
		Cgetenv();
		~Cgetenv();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cgetenv); }
		static char* getenv_c(const char* name);

	};
}

using namespace n_getenv;

#endif
