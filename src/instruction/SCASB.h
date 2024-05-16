#ifndef SCASB_H
#define SCASB_H

#include "object/object.h"

namespace n_SCASB {
	class CSCASB :public Object
	{
	public:
		CSCASB();
		~CSCASB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SCASB;

#endif
