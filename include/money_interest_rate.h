#ifndef MONEY_INTEREST_RATE_H
#define MONEY_INTEREST_RATE_H

#include "../object.h"

namespace n_money_interest_rate {
	class Cmoney_interest_rate :public Object
	{
	public:
		Cmoney_interest_rate();
		~Cmoney_interest_rate();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_interest_rate); }
	};
}

using namespace n_money_interest_rate;

#endif
