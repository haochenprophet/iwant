#ifndef DYNAMIC_CAST_OPERATOR_H
#define DYNAMIC_CAST_OPERATOR_H

#include "../operator.h"

namespace n_dynamic_cast_operator {
	class Cdynamic_cast_operator :public Coperator
	{
	public:
		Cdynamic_cast_operator();
		~Cdynamic_cast_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_dynamic_cast_operator;

#endif
