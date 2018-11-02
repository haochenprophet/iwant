#ifndef JOINER_OPERATOR_H
#define JOINER_OPERATOR_H

#include "../operator.h"

namespace n_joiner_operator {
	class Cjoiner_operator :public Coperator
	{
	public:
		Cjoiner_operator();
		~Cjoiner_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_joiner_operator;

#endif
