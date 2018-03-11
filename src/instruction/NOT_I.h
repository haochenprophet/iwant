#ifndef NOT_H
#define NOT_H

#include "../object.h"

namespace n_NOT {
	class CNOT :public Object
	{
	public:
		CNOT();
		~CNOT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_NOT;

#endif
