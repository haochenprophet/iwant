#ifndef BITWISE_NOT_H
#define BITWISE_NOT_H

#include "../operator.h"

namespace n_bitwise_not {
	class Cbitwise_not :public Coperator
	{
	public:
		Cbitwise_not();
		~Cbitwise_not();
		int my_init(void *p=nullptr);
	};
}

using namespace n_bitwise_not;

#endif
