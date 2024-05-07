#ifndef WARSHIP_GUIDED_MISSILE_H
#define WARSHIP_GUIDED_MISSILE_H

#include "../object.h"

namespace n_warship_guided_missile {
	class Cwarship_guided_missile :public Object
	{
	public:
		Cwarship_guided_missile();
		~Cwarship_guided_missile();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_guided_missile); }
	};
}

using namespace n_warship_guided_missile;

#endif
