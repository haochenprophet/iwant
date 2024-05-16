#ifndef CMPSB_H
#define CMPSB_H

#include "object/object.h"

namespace n_CMPSB {
	class CCMPSB :public Object
	{
	public:
		CCMPSB();
		~CCMPSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CMPSB;

#endif
