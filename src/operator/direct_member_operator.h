#ifndef DIRECT_MEMBER_OPERATOR_H
#define DIRECT_MEMBER_OPERATOR_H

#include "operator.h"

namespace n_direct_member_operator {
	class Cdirect_member_operator :public Coperator
	{
	public:
		Cdirect_member_operator();
		~Cdirect_member_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_direct_member_operator;

#endif
