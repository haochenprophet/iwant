#ifndef CAR_MEDICINE_BOX_H
#define CAR_MEDICINE_BOX_H

#include "../object.h"

namespace n_car_medicine_box {
	class Ccar_medicine_box :public Object
	{
	public:
		Ccar_medicine_box();
		~Ccar_medicine_box();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_medicine_box); }
	};
}

using namespace n_car_medicine_box;

#endif
