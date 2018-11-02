#ifndef DOUBLE_QUOTES_H
#define DOUBLE_QUOTES_H

#include "../operator.h"

namespace n_double_quotes {
	class Cdouble_quotes :public Coperator
	{
	public:
		Cdouble_quotes();
		~Cdouble_quotes();
		int my_init(void *p=nullptr);
	};
}

using namespace n_double_quotes;

#endif
