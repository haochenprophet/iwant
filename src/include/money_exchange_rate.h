#ifndef MONEY_EXCHANGE_RATE_H
#define MONEY_EXCHANGE_RATE_H

#include "../object.h"

namespace n_money_exchange_rate {
	class Cmoney_exchange_rate :public Object
	{
	public:
		Cmoney_exchange_rate();
		~Cmoney_exchange_rate();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_exchange_rate); }
	};
}

using namespace n_money_exchange_rate;

#endif
