#ifndef NOP_H
#define NOP_H

#include "object/object.h"

namespace n_NOP {
	class CNOP :public Object
	{
	public:
		CNOP();
		~CNOP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_NOP;

#endif
