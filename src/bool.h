#ifndef BOOL_H
#define BOOL_H

#include "object.h"

namespace n_bool {
	class Cbool :public Object
	{
	public:
		Cbool();
		int my_init(void *p=NULL);
	};
}

using namespace n_bool;

#endif
