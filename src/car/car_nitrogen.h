#ifndef CAR_NITROGEN_H
#define CAR_NITROGEN_H

#include "object/object.h"

namespace n_car_nitrogen {
	class Ccar_nitrogen :public Object
	{
	public:
		Ccar_nitrogen();
		~Ccar_nitrogen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_nitrogen); }
	};
}

using namespace n_car_nitrogen;

#endif
