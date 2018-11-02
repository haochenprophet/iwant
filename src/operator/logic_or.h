#ifndef LOGIC_OR_H
#define LOGIC_OR_H

#include "../operator.h"

namespace n_logic_or {
	class Clogic_or :public Coperator
	{
	public:
		Clogic_or();
		~Clogic_or();
		int my_init(void *p=nullptr);
	};
}

using namespace n_logic_or;

#endif
