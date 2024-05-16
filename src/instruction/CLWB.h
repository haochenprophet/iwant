#ifndef CLWB_H
#define CLWB_H

#include "object/object.h"

namespace n_CLWB {
	class CCLWB :public Object
	{
	public:
		CCLWB();
		~CCLWB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CLWB;

#endif
