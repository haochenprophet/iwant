#ifndef OPERATOR_H
#define OPERATOR_H

#include "object.h"

namespace n_Operator {
	class COperator :public Object
	{
	public:
		COperator();
		int my_init(void *p=NULL);
	};
}

using namespace n_Operator;

#endif
