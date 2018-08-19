#ifndef LLRINT_H
#define LLRINT_H

#include "../object.h"

namespace n_llrint {
	class Cllrint :public Object
	{
	public:
		Cllrint();
		~Cllrint();
		int my_init(void *p=nullptr);
	};
}

using namespace n_llrint;

#endif
