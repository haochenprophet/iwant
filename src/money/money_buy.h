#ifndef MONEY_BUY_H
#define MONEY_BUY_H

#include "../object.h"

namespace n_money_buy {
	class Cmoney_buy :public Object
	{
	public:
		Cmoney_buy();
		~Cmoney_buy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_buy); }
	};
}

using namespace n_money_buy;

#endif
