#ifndef CAR_MAYDAY_H
#define CAR_MAYDAY_H

#include "object/object.h"

namespace n_car_mayday {
	class Ccar_mayday :public Object
	{
	public:
		Ccar_mayday();
		~Ccar_mayday();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_mayday); }
	};
}

using namespace n_car_mayday;

#endif
