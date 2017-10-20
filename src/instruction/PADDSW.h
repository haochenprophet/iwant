#ifndef PADDSW_H
#define PADDSW_H

#include "object.h"

namespace n_PADDSW {
	class CPADDSW :public Object
	{
	public:
		CPADDSW();
		~CPADDSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PADDSW;

#endif
