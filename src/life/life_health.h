#ifndef LIFE_HEALTH_H
#define LIFE_HEALTH_H

#include "../object.h"

namespace n_life_health {
	class Clife_health :public Object
	{
	public:
		Clife_health();
		~Clife_health();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_health); }
	};
}

using namespace n_life_health;

#endif
