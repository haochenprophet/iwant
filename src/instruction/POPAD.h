#ifndef POPAD_H
#define POPAD_H

#include "object.h"

namespace n_POPAD {
	class CPOPAD :public Object
	{
	public:
		CPOPAD();
		~CPOPAD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_POPAD;

#endif
