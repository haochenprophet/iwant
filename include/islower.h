#ifndef ISLOWER_H
#define ISLOWER_H

#include "../object.h"

namespace n_islower {
	class Cislower :public Object
	{
	public:
		Cislower();
		~Cislower();
		int my_init(void *p=nullptr);
	};
}

using namespace n_islower;

#endif
