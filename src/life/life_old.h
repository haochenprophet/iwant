#ifndef LIFE_OLD_H
#define LIFE_OLD_H

#include "object/object.h"

namespace n_life_old {
	class Clife_old :public Object
	{
	public:
		Clife_old();
		~Clife_old();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_old); }
	};
}

using namespace n_life_old;

#endif
