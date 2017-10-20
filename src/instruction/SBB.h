#ifndef SBB_H
#define SBB_H

#include "object.h"

namespace n_SBB {
	class CSBB :public Object
	{
	public:
		CSBB();
		~CSBB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SBB;

#endif
