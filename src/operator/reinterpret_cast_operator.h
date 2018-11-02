#ifndef REINTERPRET_CAST_OPERATOR_H
#define REINTERPRET_CAST_OPERATOR_H

#include "../operator.h"

namespace n_reinterpret_cast_operator {
	class Creinterpret_cast_operator :public Coperator
	{
	public:
		Creinterpret_cast_operator();
		~Creinterpret_cast_operator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_reinterpret_cast_operator;

#endif
