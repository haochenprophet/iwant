#ifndef PADDSB_H
#define PADDSB_H

#include "object.h"

namespace n_PADDSB {
	class CPADDSB :public Object
	{
	public:
		CPADDSB();
		~CPADDSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PADDSB;

#endif
