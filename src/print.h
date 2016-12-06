#ifndef PRINT_H
#define PRINT_H

#include "object.h"

namespace n_print {
	class Cprint :public Object
	{
	public:
		Cprint();
		int my_init(void *p=NULL);
	};
}

using namespace n_print;

#endif
