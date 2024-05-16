#ifndef MONEY_ID_H
#define MONEY_ID_H

#include "object/object.h"

namespace n_money_id {
	class Cmoney_id :public Object
	{
	public:
		Cmoney_id();
		~Cmoney_id();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_id); }
	};
}

using namespace n_money_id;

#endif
