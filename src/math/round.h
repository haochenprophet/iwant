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
	};
}

using namespace n_round;

#endif
