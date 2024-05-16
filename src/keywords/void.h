#ifndef VOID_H
#define VOID_H

#include "object/object.h"

namespace n_void {
	class Cvoid :public Object
	{
	public:
		Cvoid();
		int my_init(void *p=nullptr);
	};
}

using namespace n_void;

#endif
