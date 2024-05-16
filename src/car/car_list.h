#ifndef CAR_LIST_H
#define CAR_LIST_H

#include "object/object.h"

namespace n_car_list {
	class Ccar_list :public Object
	{
	public:
		Ccar_list();
		~Ccar_list();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_list); }
	};
}

using namespace n_car_list;

#endif
