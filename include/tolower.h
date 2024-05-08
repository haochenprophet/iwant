#ifndef TOLOWER_H
#define TOLOWER_H

#include "../object.h"

namespace n_tolower {
	class Ctolower :public Object
	{
	public:
		Ctolower();
		~Ctolower();
		int my_init(void *p=nullptr);
	};
}

using namespace n_tolower;

#endif
