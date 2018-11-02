#ifndef FUNCTION_CALL_H
#define FUNCTION_CALL_H

#include "../operator.h"

namespace n_function_call {
	class Cfunction_call :public Coperator
	{
	public:
		Cfunction_call();
		~Cfunction_call();
		int my_init(void *p=nullptr);
	};
}

using namespace n_function_call;

#endif
