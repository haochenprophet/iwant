#ifndef END_OPERATOR_H
#define END_OPERATOR_H

#include "../operator.h"

namespace n_end_operator {
	class Cend_operator :public Coperator
	{
	public:
		Cend_operator();
		~Cend_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_end_operator;

#endif
