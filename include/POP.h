#ifndef POP_H
#define POP_H

#include "../object.h"

namespace n_POP {
	class CPOP :public Object
	{
	public:
		CPOP();
		~CPOP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_POP;

#endif
