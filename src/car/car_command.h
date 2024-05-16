#ifndef CAR_COMMAND_H
#define CAR_COMMAND_H

#include "object/object.h"

namespace n_car_command {
	class Ccar_command :public Object
	{
	public:
		Ccar_command();
		~Ccar_command();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_command); }
	};
}

using namespace n_car_command;

#endif
