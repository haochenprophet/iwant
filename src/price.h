#ifndef PRICE_H
#define PRICE_H

#include "object.h"

namespace n_price {
	class Cprice :public Object
	{
	public:
		Cprice();
		int my_init(void *p=NULL);
	};
}

using namespace n_price;

#endif
