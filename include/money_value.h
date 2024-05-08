#ifndef MONEY_VALUE_H
#define MONEY_VALUE_H

#include "../object.h"

namespace n_money_value {
	class Cmoney_value :public Object
	{
	public:
		Cmoney_value();
		~Cmoney_value();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_value); }
	};
}

using namespace n_money_value;

#endif
