#ifndef CAR_CPU_H
#define CAR_CPU_H

#include "../object.h"

namespace n_car_cpu {
	class Ccar_cpu :public Object
	{
	public:
		Ccar_cpu();
		~Ccar_cpu();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_cpu); }
	};
}

using namespace n_car_cpu;

#endif
