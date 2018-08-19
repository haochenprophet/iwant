#ifndef LDEXP_H
#define LDEXP_H

#include "../object.h"

namespace n_ldexp {
	class Cldexp :public Object
	{
	public:
		Cldexp();
		~Cldexp();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ldexp;

#endif
