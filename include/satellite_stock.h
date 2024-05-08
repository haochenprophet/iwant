#ifndef SATELLITE_STOCK_H
#define SATELLITE_STOCK_H

#include "../object.h"

namespace n_satellite_stock {
	class Csatellite_stock :public Object
	{
	public:
		Csatellite_stock();
		~Csatellite_stock();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csatellite_stock); }
	};
}

using namespace n_satellite_stock;

#endif
