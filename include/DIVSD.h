#ifndef DIVSD_H
#define DIVSD_H

#include "../object.h"

namespace n_DIVSD {
	class CDIVSD :public Object
	{
	public:
		CDIVSD();
		~CDIVSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_DIVSD;

#endif
