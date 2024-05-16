#ifndef AESENCLAST_H
#define AESENCLAST_H

#include "object/object.h"

namespace n_AESENCLAST {
	class CAESENCLAST :public Object
	{
	public:
		CAESENCLAST();
		~CAESENCLAST();
		int my_init(void *p=nullptr);
	};
}

using namespace n_AESENCLAST;

#endif
