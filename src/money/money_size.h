#ifndef MONEY_SIZE_H
#define MONEY_SIZE_H

#include "object/object.h"

namespace n_money_size {
	class Cmoney_size :public Object
	{
	public:
		Cmoney_size();
		~Cmoney_size();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_size); }
	};
}

using namespace n_money_size;

#endif
