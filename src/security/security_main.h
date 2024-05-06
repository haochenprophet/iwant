#ifndef SECURITY_MAIN_H
#define SECURITY_MAIN_H

#include "../object.h"

namespace n_security_main {
	class Csecurity_main :public Object
	{
	public:
		Csecurity_main();
		~Csecurity_main();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_main); }
	};
}

using namespace n_security_main;

#endif
