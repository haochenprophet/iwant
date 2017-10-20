#ifndef PMINSB_H
#define PMINSB_H

#include "object.h"

namespace n_PMINSB {
	class CPMINSB :public Object
	{
	public:
		CPMINSB();
		~CPMINSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMINSB;

#endif
