#ifndef STATIC_CAST_OPERATOR_H
#define STATIC_CAST_OPERATOR_H

#include "operator.h"

namespace n_static_cast_operator {
	class Cstatic_cast_operator :public Coperator
	{
	public:
		Cstatic_cast_operator();
		~Cstatic_cast_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_static_cast_operator;

#endif
