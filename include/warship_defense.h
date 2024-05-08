#ifndef WARSHIP_DEFENSE_H
#define WARSHIP_DEFENSE_H

#include "../object.h"

namespace n_warship_defense {
	class Cwarship_defense :public Object
	{
	public:
		Cwarship_defense();
		~Cwarship_defense();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_defense); }
	};
}

using namespace n_warship_defense;

#endif
