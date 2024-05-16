#ifndef MONEY_EXPEND_H
#define MONEY_EXPEND_H

#include "object/object.h"

namespace n_money_expend {
	class Cmoney_expend :public Object
	{
	public:
		Cmoney_expend();
		~Cmoney_expend();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_expend); }
	};
}

using namespace n_money_expend;

#endif
