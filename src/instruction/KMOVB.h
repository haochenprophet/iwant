#ifndef KMOVB_H
#define KMOVB_H

#include "object/object.h"

namespace n_KMOVB {
	class CKMOVB :public Object
	{
	public:
		CKMOVB();
		~CKMOVB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KMOVB;

#endif
