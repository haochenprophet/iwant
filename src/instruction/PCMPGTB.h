#ifndef PCMPGTB_H
#define PCMPGTB_H

#include "object.h"

namespace n_PCMPGTB {
	class CPCMPGTB :public Object
	{
	public:
		CPCMPGTB();
		~CPCMPGTB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PCMPGTB;

#endif
