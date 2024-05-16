#ifndef FSTENV_H
#define FSTENV_H

#include "object/object.h"

namespace n_FSTENV {
	class CFSTENV :public Object
	{
	public:
		CFSTENV();
		~CFSTENV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSTENV;

#endif
