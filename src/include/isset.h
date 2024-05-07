#ifndef ISSET_H
#define ISSET_H

#include "../object.h"

namespace n_isset {
	class Cisset :public Object
	{
	public:
		Cisset();
		int my_init(void *p=nullptr);
	};
}

using namespace n_isset;

#endif
