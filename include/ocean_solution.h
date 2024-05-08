#ifndef OCEAN_SOLUTION_H
#define OCEAN_SOLUTION_H

#include "../object.h"

namespace n_ocean_solution {
	class Cocean_solution :public Object
	{
	public:
		Cocean_solution();
		~Cocean_solution();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cocean_solution); }
	};
}

using namespace n_ocean_solution;

#endif
