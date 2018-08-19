#ifndef SCANF_H
#define SCANF_H

#include "../object.h"

namespace n_scanf {
	class Cscanf :public Object
	{
	public:
		Cscanf();
		~Cscanf();
		int my_init(void *p=nullptr);
	};
}

using namespace n_scanf;

#endif
