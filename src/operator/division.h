#ifndef DIVISION_H
#define DIVISION_H

#include "../operator.h"

namespace n_division {
	class Cdivision :public Coperator
	{
	public:
		Cdivision();
		~Cdivision();
		int my_init(void *p=nullptr);
	};
}

using namespace n_division;

#endif
