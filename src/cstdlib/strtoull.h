#ifndef STRTOULL_H
#define STRTOULL_H

#include "../object.h"

namespace n_strtoull {
	class Cstrtoull :public Object
	{
	public:
		Cstrtoull();
		~Cstrtoull();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strtoull;

#endif
