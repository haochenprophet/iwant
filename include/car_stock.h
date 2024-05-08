#ifndef CAR_STOCK_H
#define CAR_STOCK_H

#include "../object.h"

namespace n_car_stock {
	class Ccar_stock :public Object
	{
	public:
		Ccar_stock();
		~Ccar_stock();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccar_stock); }
	};
}

using namespace n_car_stock;

#endif
