#ifndef WARSHIP_COMMANDER_H
#define WARSHIP_COMMANDER_H

#include "../object.h"

namespace n_warship_commander {
	class Cwarship_commander :public Object
	{
	public:
		Cwarship_commander();
		~Cwarship_commander();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_commander); }
	};
}

using namespace n_warship_commander;

#endif
