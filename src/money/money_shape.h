#ifndef MONEY_SHAPE_H
#define MONEY_SHAPE_H

#include "../object.h"

namespace n_money_shape {
	class Cmoney_shape :public Object
	{
	public:
		Cmoney_shape();
		~Cmoney_shape();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmoney_shape); }
	};
}

using namespace n_money_shape;

#endif
