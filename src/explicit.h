#ifndef EXPLICIT_H
#define EXPLICIT_H

#include "object.h"

namespace n_explicit {
	class Cexplicit :public Object
	{
	public:
		Cexplicit();
		int my_init(void *p=NULL);
	};
}

using namespace n_explicit;

#endif
