#ifndef LIFE_TOUR_H
#define LIFE_TOUR_H

#include "object/object.h"

namespace n_life_tour {
	class Clife_tour :public Object
	{
	public:
		Clife_tour();
		~Clife_tour();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_tour); }
	};
}

using namespace n_life_tour;

#endif
