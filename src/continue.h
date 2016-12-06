#ifndef CONTINUE_H
#define CONTINUE_H

#include "object.h"

namespace n_continue {
	class Ccontinue :public Object
	{
	public:
		Ccontinue();
		int my_init(void *p=NULL);
	};
}

using namespace n_continue;

#endif
