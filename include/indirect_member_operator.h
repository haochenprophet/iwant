#ifndef INDIRECT_MEMBER_OPERATOR_H
#define INDIRECT_MEMBER_OPERATOR_H

#include "operator.h"

namespace n_indirect_member_operator {
	class Cindirect_member_operator :public Coperator
	{
	public:
		Cindirect_member_operator();
		~Cindirect_member_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_indirect_member_operator;

#endif
