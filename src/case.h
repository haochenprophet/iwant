#ifndef CASE_H
#define CASE_H

#include "object.h"

namespace n_case {
	class Ccase :public Object
	{
	public:
		Ccase();
		int my_init(void *p=NULL);
	};
}

using namespace n_case;

#endif
