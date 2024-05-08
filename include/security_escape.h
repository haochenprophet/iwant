#ifndef SECURITY_ESCAPE_H
#define SECURITY_ESCAPE_H

#include "../object.h"

namespace n_security_escape {
	class Csecurity_escape :public Object
	{
	public:
		Csecurity_escape();
		~Csecurity_escape();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_escape); }
	};
}

using namespace n_security_escape;

#endif
