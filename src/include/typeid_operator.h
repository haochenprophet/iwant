#ifndef TYPEID_OPERATOR_H
#define TYPEID_OPERATOR_H

#include "operator.h"

namespace n_typeid_operator {
	class Ctypeid_operator :public Coperator
	{
	public:
		Ctypeid_operator();
		~Ctypeid_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_typeid_operator;

#endif
