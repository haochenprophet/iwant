#ifndef ISWCNTRL_H
#define ISWCNTRL_H

#include "../object.h"

namespace n_iswcntrl {
	class Ciswcntrl :public Object
	{
	public:
		Ciswcntrl();
		~Ciswcntrl();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswcntrl;

#endif
