#ifndef SUBSD_H
#define SUBSD_H

#include "object.h"

namespace n_SUBSD {
	class CSUBSD :public Object
	{
	public:
		CSUBSD();
		~CSUBSD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SUBSD;

#endif
