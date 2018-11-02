#ifndef LOGIC_AND_H
#define LOGIC_AND_H

#include "../operator.h"

namespace n_logic_and {
	class Clogic_and :public Coperator
	{
	public:
		Clogic_and();
		~Clogic_and();
		int my_init(void *p=nullptr);
	};
}

using namespace n_logic_and;

#endif
