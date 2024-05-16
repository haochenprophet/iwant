#ifndef CONTINUE_H
#define CONTINUE_H

#include "object/object.h"

namespace n_continue {
	class Ccontinue :public Object
	{
	public:
		Ccontinue();
		int my_init(void *p=nullptr);
	};
}

using namespace n_continue;

#endif
