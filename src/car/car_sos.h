#ifndef CAR_SOS_H
#define CAR_SOS_H

#include "object/object.h"

namespace n_car_sos {
	class Ccar_sos :public Object
	{
	public:
		Ccar_sos();
		~Ccar_sos();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_sos); }
	};
}

using namespace n_car_sos;

#endif
