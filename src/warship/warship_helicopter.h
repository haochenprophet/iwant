#ifndef WARSHIP_HELICOPTER_H
#define WARSHIP_HELICOPTER_H

#include "../object.h"

namespace n_warship_helicopter {
	class Cwarship_helicopter :public Object
	{
	public:
		Cwarship_helicopter();
		~Cwarship_helicopter();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_helicopter); }
	};
}

using namespace n_warship_helicopter;

#endif
