#ifndef ISCNTRL_H
#define ISCNTRL_H

#include "../object.h"

namespace n_iscntrl {
	class Ciscntrl :public Object
	{
	public:
		Ciscntrl();
		~Ciscntrl();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iscntrl;

#endif
