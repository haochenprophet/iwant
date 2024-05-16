#ifndef SECURITY_SOLUTION_H
#define SECURITY_SOLUTION_H

#include "object/object.h"

namespace n_security_solution {
	class Csecurity_solution :public Object
	{
	public:
		Csecurity_solution();
		~Csecurity_solution();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_solution); }
	};
}

using namespace n_security_solution;

#endif
