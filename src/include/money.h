#ifndef MONEY_H
#define MONEY_H

#include "../object.h"

namespace n_money {
	class Cmoney :public Object
	{
	public:
		Cmoney();
		~Cmoney();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney); }
	};
}

using namespace n_money;

#endif
