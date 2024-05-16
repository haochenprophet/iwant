#ifndef PASS_H
#define PASS_H

#include "object/object.h"

namespace n_pass {
	class Cpass :public Object
	{
	public:
		Cpass();
		int my_init(void *p=nullptr);
	};
}

using namespace n_pass;

#endif
