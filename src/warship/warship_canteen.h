#ifndef WARSHIP_CANTEEN_H
#define WARSHIP_CANTEEN_H

#include "object/object.h"

namespace n_warship_canteen {
	class Cwarship_canteen :public Object
	{
	public:
		Cwarship_canteen();
		~Cwarship_canteen();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_canteen); }
	};
}

using namespace n_warship_canteen;

#endif
