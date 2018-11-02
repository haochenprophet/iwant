#ifndef CONST_CAST_OPERATOR_H
#define CONST_CAST_OPERATOR_H

#include "../operator.h"

namespace n_const_cast_operator {
	class Cconst_cast_operator :public Coperator
	{
	public:
		Cconst_cast_operator();
		~Cconst_cast_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_const_cast_operator;

#endif
