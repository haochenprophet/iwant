#ifndef CAR_MIRROR_H
#define CAR_MIRROR_H

#include "../object.h"

namespace n_car_mirror {
	class Ccar_mirror :public Object
	{
	public:
		Ccar_mirror();
		~Ccar_mirror();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_mirror); }
	};
}

using namespace n_car_mirror;

#endif
