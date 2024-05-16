#ifndef MONEY_NATION_H
#define MONEY_NATION_H

#include "object/object.h"

namespace n_money_nation {
	class Cmoney_nation :public Object
	{
	public:
		Cmoney_nation();
		~Cmoney_nation();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_nation); }
	};
}

using namespace n_money_nation;

#endif
