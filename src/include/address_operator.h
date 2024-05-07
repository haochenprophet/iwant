#ifndef ADDRESS_OPERATOR_H
#define ADDRESS_OPERATOR_H

#include "operator.h"

namespace n_address_operator {
	class Caddress_operator :public Coperator
	{
	public:
		Caddress_operator();
		~Caddress_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_address_operator;

#endif
