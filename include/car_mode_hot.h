#ifndef CAR_MODE_HOT_H
#define CAR_MODE_HOT_H

#include "../object.h"

namespace n_car_mode_hot {
	class Ccar_mode_hot :public Object
	{
	public:
		Ccar_mode_hot();
		~Ccar_mode_hot();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_mode_hot); }
	};
}

using namespace n_car_mode_hot;

#endif
