#ifndef PEXT_H
#define PEXT_H

#include "object/object.h"

namespace n_PEXT {
	class CPEXT :public Object
	{
	public:
		CPEXT();
		~CPEXT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PEXT;

#endif
