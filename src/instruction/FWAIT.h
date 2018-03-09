#ifndef FWAIT_H
#define FWAIT_H

#include "../object.h"

namespace n_FWAIT {
	class CFWAIT :public Object
	{
	public:
		CFWAIT();
		~CFWAIT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FWAIT;

#endif
