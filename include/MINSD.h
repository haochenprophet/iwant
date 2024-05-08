#ifndef MINSD_H
#define MINSD_H

#include "../object.h"

namespace n_MINSD {
	class CMINSD :public Object
	{
	public:
		CMINSD();
		~CMINSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MINSD;

#endif
