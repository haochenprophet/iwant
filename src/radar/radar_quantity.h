#ifndef RADAR_QUANTITY_H
#define RADAR_QUANTITY_H

#include "object/object.h"

namespace n_radar_quantity {
	class Cradar_quantity :public Object
	{
	public:
		Cradar_quantity();
		~Cradar_quantity();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cradar_quantity); }
	};
}

using namespace n_radar_quantity;

#endif
