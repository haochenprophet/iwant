#ifndef SUBSTRUCTION_H
#define SUBSTRUCTION_H

#include "../operator.h"

namespace n_substruction {
	class Csubstruction :public Coperator
	{
	public:
		Csubstruction();
		~Csubstruction();
		int my_init(void *p=nullptr);
	};
}

using namespace n_substruction;

#endif
