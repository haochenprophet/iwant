#ifndef PBLENDVB_H
#define PBLENDVB_H

#include "object.h"

namespace n_PBLENDVB {
	class CPBLENDVB :public Object
	{
	public:
		CPBLENDVB();
		~CPBLENDVB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PBLENDVB;

#endif
