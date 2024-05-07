#ifndef LIFE_LIVE_H
#define LIFE_LIVE_H

#include "../object.h"

namespace n_life_live {
	class Clife_live :public Object
	{
	public:
		Clife_live();
		~Clife_live();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_live); }
	};
}

using namespace n_life_live;

#endif
