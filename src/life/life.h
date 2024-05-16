#ifndef LIFE_H
#define LIFE_H

#include "object/object.h"

namespace n_life {
	class Clife :public Object
	{
	public:
		Clife();
		~Clife();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Clife); }
	};
}

using namespace n_life;

#endif
