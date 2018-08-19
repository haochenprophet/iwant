#ifndef RINT_H
#define RINT_H

#include "../object.h"

namespace n_rint {
	class Crint :public Object
	{
	public:
		Crint();
		~Crint();
		int my_init(void *p=nullptr);
	};
}

using namespace n_rint;

#endif
