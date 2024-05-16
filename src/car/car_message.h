#ifndef CAR_MESSAGE_H
#define CAR_MESSAGE_H

#include "object/object.h"

namespace n_car_message {
	class Ccar_message :public Object
	{
	public:
		Ccar_message();
		~Ccar_message();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_message); }
	};
}

using namespace n_car_message;

#endif
