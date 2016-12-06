#ifndef OPERATOR_H
#define OPERATOR_H

#include "object.h"

namespace n_operator {
	class Coperator :public Object
	{
	public:
		Coperator();
		int my_init(void *p=NULL);
	};
}

using namespace n_operator;

#endif
