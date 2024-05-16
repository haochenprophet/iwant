#ifndef PINSRW_H
#define PINSRW_H

#include "object/object.h"

namespace n_PINSRW {
	class CPINSRW :public Object
	{
	public:
		CPINSRW();
		~CPINSRW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PINSRW;

#endif
