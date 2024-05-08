#ifndef CAR_COMMUNICATION_H
#define CAR_COMMUNICATION_H

#include "../object.h"

namespace n_car_communication {
	class Ccar_communication :public Object
	{
	public:
		Ccar_communication();
		~Ccar_communication();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_communication); }
	};
}

using namespace n_car_communication;

#endif
