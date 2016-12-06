#ifndef EVAL_H
#define EVAL_H

#include "object.h"

namespace n_eval {
	class Ceval :public Object
	{
	public:
		Ceval();
		int my_init(void *p=NULL);
	};
}

using namespace n_eval;

#endif
