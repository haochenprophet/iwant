#ifndef UNION_H
#define UNION_H

#include "object.h"

namespace n_union {
	class Cunion :public Object
	{
	public:
		Cunion();
		int my_init(void *p=NULL);
	};
}

using namespace n_union;

#endif
