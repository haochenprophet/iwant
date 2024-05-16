#ifndef MONEY_DYNASTY_H
#define MONEY_DYNASTY_H

#include "object/object.h"

namespace n_money_dynasty {
	class Cmoney_dynasty :public Object
	{
	public:
		Cmoney_dynasty();
		~Cmoney_dynasty();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_dynasty); }
	};
}

using namespace n_money_dynasty;

#endif
