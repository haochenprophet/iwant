#ifndef CAR_SOLUTION_H
#define CAR_SOLUTION_H

#include "../object.h"

namespace n_car_solution {
	class Ccar_solution :public Object
	{
	public:
		Ccar_solution();
		~Ccar_solution();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_solution); }
	};
}

using namespace n_car_solution;

#endif
