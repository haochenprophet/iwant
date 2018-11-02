#ifndef LOGIC_NOT_H
#define LOGIC_NOT_H

#include "../operator.h"

namespace n_logic_not {
	class Clogic_not :public Coperator
	{
	public:
		Clogic_not();
		~Clogic_not();
		int my_init(void *p=nullptr);
	};
}

using namespace n_logic_not;

#endif
