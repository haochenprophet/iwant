#ifndef STRTOLD_H
#define STRTOLD_H

#include "../object.h"

namespace n_strtold {
	class Cstrtold :public Object
	{
	public:
		Cstrtold();
		~Cstrtold();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strtold;

#endif
