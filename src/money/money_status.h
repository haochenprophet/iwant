#ifndef MONEY_STATUS_H
#define MONEY_STATUS_H

#include "object/object.h"

namespace n_money_status {
	class Cmoney_status :public Object
	{
	public:
		Cmoney_status();
		~Cmoney_status();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_status); }
	};
}

using namespace n_money_status;

#endif
