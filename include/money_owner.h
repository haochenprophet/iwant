#ifndef MONEY_OWNER_H
#define MONEY_OWNER_H

#include "../object.h"

namespace n_money_owner {
	class Cmoney_owner :public Object
	{
	public:
		Cmoney_owner();
		~Cmoney_owner();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_owner); }
	};
}

using namespace n_money_owner;

#endif
