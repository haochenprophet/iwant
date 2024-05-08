#ifndef LAMBDA_H
#define LAMBDA_H

#include "../object.h"

namespace n_lambda {
	class Clambda :public Object
	{
	public:
		Clambda();
		int my_init(void *p=nullptr);
	};
}

using namespace n_lambda;

#endif
