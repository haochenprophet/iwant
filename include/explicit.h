#ifndef EXPLICIT_H
#define EXPLICIT_H

#include "../object.h"

namespace n_explicit {
	class Cexplicit :public Object
	{
	public:
		Cexplicit();
		int my_init(void *p=nullptr);
	};
}

using namespace n_explicit;

#endif
