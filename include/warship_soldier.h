#ifndef WARSHIP_SOLDIER_H
#define WARSHIP_SOLDIER_H

#include "../object.h"

namespace n_warship_soldier {
	class Cwarship_soldier :public Object
	{
	public:
		Cwarship_soldier();
		~Cwarship_soldier();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_soldier); }
	};
}

using namespace n_warship_soldier;

#endif
