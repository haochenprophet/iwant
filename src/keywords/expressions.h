#ifndef EXPRESSIONS_H
#define EXPRESSIONS_H

#include "object/object.h"

namespace n_expressions {
	class Cexpressions :public Object
	{
	public:
		Cexpressions();
		int my_init(void *p=nullptr);
	};
}

using namespace n_expressions;

#endif
