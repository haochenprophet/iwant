#ifndef SECURITY_HELP_H
#define SECURITY_HELP_H

#include "object/object.h"

namespace n_security_help {
	class Csecurity_help :public Object
	{
	public:
		Csecurity_help();
		~Csecurity_help();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_help); }
	};
}

using namespace n_security_help;

#endif
