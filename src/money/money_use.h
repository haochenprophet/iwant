#ifndef MONEY_USE_H
#define MONEY_USE_H

#include "object/object.h"

namespace n_money_use {
	class Cmoney_use :public Object
	{
	public:
		Cmoney_use();
		~Cmoney_use();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_use); }
	};
}

using namespace n_money_use;

#endif
