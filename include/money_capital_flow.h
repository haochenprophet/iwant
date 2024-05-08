#ifndef MONEY_CAPITAL_FLOW_H
#define MONEY_CAPITAL_FLOW_H

#include "../object.h"

namespace n_money_capital_flow {
	class Cmoney_capital_flow :public Object
	{
	public:
		Cmoney_capital_flow();
		~Cmoney_capital_flow();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_capital_flow); }
	};
}

using namespace n_money_capital_flow;

#endif
