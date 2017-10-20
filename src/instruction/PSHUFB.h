#ifndef PSHUFB_H
#define PSHUFB_H

#include "object.h"

namespace n_PSHUFB {
	class CPSHUFB :public Object
	{
	public:
		CPSHUFB();
		~CPSHUFB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSHUFB;

#endif
