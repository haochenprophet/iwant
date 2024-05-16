#ifndef LIFE_AMUSE_H
#define LIFE_AMUSE_H

#include "object/object.h"

namespace n_life_amuse {
	class Clife_amuse :public Object
	{
	public:
		Clife_amuse();
		~Clife_amuse();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_amuse); }
	};
}

using namespace n_life_amuse;

#endif
