#ifndef SATELLITE_SOLUTION_H
#define SATELLITE_SOLUTION_H

#include "../object.h"

namespace n_satellite_solution {
	class Csatellite_solution :public Object
	{
	public:
		Csatellite_solution();
		~Csatellite_solution();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_solution); }
	};
}

using namespace n_satellite_solution;

#endif
