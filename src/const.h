#ifndef CONST_H
#define CONST_H

#include "object.h"

namespace n_const {
	class Cconst :public Object
	{
	public:
		Cconst();
		int my_init(void *p=NULL);
	};
}

using namespace n_const;

#endif
