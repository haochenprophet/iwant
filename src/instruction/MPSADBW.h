#ifndef MPSADBW_H
#define MPSADBW_H

#include "object.h"

namespace n_MPSADBW {
	class CMPSADBW :public Object
	{
	public:
		CMPSADBW();
		~CMPSADBW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MPSADBW;

#endif
