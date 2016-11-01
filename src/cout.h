#ifndef COUT_H
#define COUT_H

#include "object.h"

namespace n_cout {
	class Ccout :public Object
	{
	public:
		Ccout();
		int func(void *p=NULL);
	};

}
using namespace n_cout;

#endif
