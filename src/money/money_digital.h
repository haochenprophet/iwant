#ifndef MONEY_DIGITAL_H
#define MONEY_DIGITAL_H

#include "../object.h"

namespace n_money_digital {
	class Cmoney_digital :public Object
	{
	public:
		Cmoney_digital();
		~Cmoney_digital();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_digital); }
	};
}

using namespace n_money_digital;

#endif
