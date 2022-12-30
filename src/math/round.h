#ifndef ROUND_H
#define ROUND_H

#include "../object.h"

namespace n_round {
	class Cround :public Object
	{
	public:
		Cround();
		~Cround();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cround); }
	};
}

using namespace n_round;

#endif
