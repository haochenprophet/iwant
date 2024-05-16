#ifndef KORTESTB_H
#define KORTESTB_H

#include "object/object.h"

namespace n_KORTESTB {
	class CKORTESTB :public Object
	{
	public:
		CKORTESTB();
		~CKORTESTB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KORTESTB;

#endif
