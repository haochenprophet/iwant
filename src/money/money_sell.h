#ifndef MONEY_SELL_H
#define MONEY_SELL_H

#include "object/object.h"

namespace n_money_sell {
	class Cmoney_sell :public Object
	{
	public:
		Cmoney_sell();
		~Cmoney_sell();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_sell); }
	};
}

using namespace n_money_sell;

#endif
