#ifndef SPACE_OPERATOR_H
#define SPACE_OPERATOR_H

#include "../operator.h"

namespace n_space_operator {
	class Cspace_operator :public Coperator
	{
	public:
		Cspace_operator();
		~Cspace_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_space_operator;

#endif
