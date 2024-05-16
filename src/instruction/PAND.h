#ifndef PAND_H
#define PAND_H

#include "object/object.h"

namespace n_PAND {
	class CPAND :public Object
	{
	public:
		CPAND();
		~CPAND();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PAND;

#endif
