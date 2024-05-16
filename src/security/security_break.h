#ifndef SECURITY_BREAK_H
#define SECURITY_BREAK_H

#include "object/object.h"

namespace n_security_break {
	class Csecurity_break :public Object
	{
	public:
		Csecurity_break();
		~Csecurity_break();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_break); }
	};
}

using namespace n_security_break;

#endif
