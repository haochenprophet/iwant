#ifndef STRUCT_H
#define STRUCT_H

#include "object.h"

namespace n_struct {
	class Cstruct :public Object
	{
	public:
		Cstruct();
		int my_init(void *p=NULL);
	};
}

using namespace n_struct;

#endif
