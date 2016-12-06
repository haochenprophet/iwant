#ifndef PASS_H
#define PASS_H

#include "object.h"

namespace n_pass {
	class Cpass :public Object
	{
	public:
		Cpass();
		int my_init(void *p=NULL);
	};
}

using namespace n_pass;

#endif
