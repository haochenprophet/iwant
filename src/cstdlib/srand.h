#ifndef SRAND_H
#define SRAND_H

#include "../object.h"

namespace n_srand {
	class Csrand :public Object
	{
	public:
		Csrand();
		~Csrand();
		int my_init(void *p=nullptr);
	};
}

using namespace n_srand;

#endif
