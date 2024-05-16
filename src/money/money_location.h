#ifndef MONEY_LOCATION_H
#define MONEY_LOCATION_H

#include "object/object.h"

namespace n_money_location {
	class Cmoney_location :public Object
	{
	public:
		Cmoney_location();
		~Cmoney_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_location); }
	};
}

using namespace n_money_location;

#endif
