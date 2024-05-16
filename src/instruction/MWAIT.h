#ifndef MWAIT_H
#define MWAIT_H

#include "object/object.h"

namespace n_MWAIT {
	class CMWAIT :public Object
	{
	public:
		CMWAIT();
		~CMWAIT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MWAIT;

#endif
