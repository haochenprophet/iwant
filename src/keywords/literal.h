#ifndef LITERAL_H
#define LITERAL_H

#include "object.h"

namespace n_literal {
	class Cliteral :public Object
	{
	public:
		Cliteral();
		int my_init(void *p=nullptr);
	};
}

using namespace n_literal;

#endif
