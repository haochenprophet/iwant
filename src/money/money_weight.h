#ifndef MONEY_WEIGHT_H
#define MONEY_WEIGHT_H

#include "../object.h"

namespace n_money_weight {
	class Cmoney_weight :public Object
	{
	public:
		Cmoney_weight();
		~Cmoney_weight();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_weight); }
	};
}

using namespace n_money_weight;

#endif
