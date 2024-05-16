#ifndef MONEY_AMOUNT_H
#define MONEY_AMOUNT_H

#include "object/object.h"

namespace n_money_amount {
	class Cmoney_amount :public Object
	{
	public:
		Cmoney_amount();
		~Cmoney_amount();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_amount); }
	};
}

using namespace n_money_amount;

#endif
