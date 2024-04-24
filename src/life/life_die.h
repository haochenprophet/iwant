#ifndef LIFE_DIE_H
#define LIFE_DIE_H

#include "../object.h"

namespace n_life_die {
	class Clife_die :public Object
	{
	public:
		Clife_die();
		~Clife_die();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_die); }
	};
}

using namespace n_life_die;

#endif
