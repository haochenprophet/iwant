#ifndef MONEY_INCOME_H
#define MONEY_INCOME_H

#include "object/object.h"

namespace n_money_income {
	class Cmoney_income :public Object
	{
	public:
		Cmoney_income();
		~Cmoney_income();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_income); }
	};
}

using namespace n_money_income;

#endif
