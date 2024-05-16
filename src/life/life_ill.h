#ifndef LIFE_ILL_H
#define LIFE_ILL_H

#include "object/object.h"

namespace n_life_ill {
	class Clife_ill :public Object
	{
	public:
		Clife_ill();
		~Clife_ill();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife_ill); }
	};
}

using namespace n_life_ill;

#endif
