#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "../operator.h"

namespace n_multiplication {
	class Cmultiplication :public Coperator
	{
	public:
		Cmultiplication();
		~Cmultiplication();
		int my_init(void *p=nullptr);
	};
}

using namespace n_multiplication;

#endif
