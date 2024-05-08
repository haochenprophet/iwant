#ifndef CAR_LINK_H
#define CAR_LINK_H

#include "../object.h"

namespace n_car_link {
	class Ccar_link :public Object
	{
	public:
		Ccar_link();
		~Ccar_link();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_link); }
	};
}

using namespace n_car_link;

#endif
