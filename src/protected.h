#ifndef PROTECTED_H
#define PROTECTED_H

#include "object.h"

namespace n_protected {
	class Cprotected :public Object
	{
	public:
		Cprotected();
		int my_init(void *p=nullptr);
	};
}

using namespace n_protected;

#endif
