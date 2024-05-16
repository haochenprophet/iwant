#ifndef PHADDW_H
#define PHADDW_H

#include "object/object.h"

namespace n_PHADDW {
	class CPHADDW :public Object
	{
	public:
		CPHADDW();
		~CPHADDW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PHADDW;

#endif
