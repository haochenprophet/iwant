#ifndef VOID_H
#define VOID_H

#include "object.h"

namespace n_void {
	class Cvoid :public Object
	{
	public:
		Cvoid();
		int my_init(void *p=NULL);
	};
}

using namespace n_void;

#endif
