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
		size_t my_size() { return sizeof(Cstrtoull); }
	};
}

using namespace n_strtoull;

#endif
