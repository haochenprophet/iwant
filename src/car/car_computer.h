#ifndef CAR_COMPUTER_H
#define CAR_COMPUTER_H

#include "../object.h"

namespace n_car_computer {
	class Ccar_computer :public Object
	{
	public:
		Ccar_computer();
		~Ccar_computer();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_computer); }
	};
}

using namespace n_car_computer;

#endif
