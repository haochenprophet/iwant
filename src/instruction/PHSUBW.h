#ifndef PHSUBW_H
#define PHSUBW_H

#include "object/object.h"

namespace n_PHSUBW {
	class CPHSUBW :public Object
	{
	public:
		CPHSUBW();
		~CPHSUBW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PHSUBW;

#endif
