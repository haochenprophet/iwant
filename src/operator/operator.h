#ifndef OPERATOR_H
#define OPERATOR_H

#include "object/object.h"

namespace n_operator {

	enum class Combination {
		none,
		L2R,//left to right
		R2L,//right to left
	};

	class Coperator :public Object
	{
	public:
		Combination combination;
		int op_priority;
		Object * comply;
	public:
		Coperator();
		int my_init(void *p=nullptr);
	};
}

using namespace n_operator;

#endif
