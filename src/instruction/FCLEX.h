#ifndef FCLEX_H
#define FCLEX_H

#include "object.h"

namespace n_FCLEX {
	class CFCLEX :public Object
	{
	public:
		CFCLEX();
		~CFCLEX();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FCLEX;

#endif
