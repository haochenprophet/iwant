#ifndef LIFE_DANGER_H
#define LIFE_DANGER_H

#include "../object.h"

namespace n_life_danger {
	class Clife_danger :public Object
	{
	public:
		Clife_danger();
		~Clife_danger();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_danger); }
	};
}

using namespace n_life_danger;

#endif
