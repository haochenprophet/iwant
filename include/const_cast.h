#ifndef CONST_CAST_H
#define CONST_CAST_H

#include "../object.h"

namespace n_const_cast {
	class Cconst_cast :public Object
	{
	public:
		Cconst_cast();
		int my_init(void *p=nullptr);
	};
}

using namespace n_const_cast;

#endif
