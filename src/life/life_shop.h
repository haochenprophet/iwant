#ifndef LIFE_SHOP_H
#define LIFE_SHOP_H

#include "object/object.h"

namespace n_life_shop {
	class Clife_shop :public Object
	{
	public:
		Clife_shop();
		~Clife_shop();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_shop); }
	};
}

using namespace n_life_shop;

#endif
