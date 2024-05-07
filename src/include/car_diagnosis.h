#ifndef CAR_DIAGNOSIS_H
#define CAR_DIAGNOSIS_H

#include "../object.h"

namespace n_car_diagnosis {
	class Ccar_diagnosis :public Object
	{
	public:
		Ccar_diagnosis();
		~Ccar_diagnosis();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_diagnosis); }
	};
}

using namespace n_car_diagnosis;

#endif
