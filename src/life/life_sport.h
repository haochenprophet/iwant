#ifndef LIFE_SPORT_H
#define LIFE_SPORT_H

#include "object/object.h"

namespace n_life_sport {
	class Clife_sport :public Object
	{
	public:
		Clife_sport();
		~Clife_sport();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_sport); }
	};
}

using namespace n_life_sport;

#endif
