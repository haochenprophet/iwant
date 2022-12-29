#ifndef SYSTEM_H
#define SYSTEM_H

#include "../object.h"

namespace n_system {
	class Csystem :public Object
	{
	public:
		Csystem();
		~Csystem();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Csystem); }
		static int system_c(const char* command);
	};
}

using namespace n_system;

#endif
