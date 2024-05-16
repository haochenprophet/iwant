#ifndef PSUBSW_H
#define PSUBSW_H

#include "object/object.h"

namespace n_PSUBSW {
	class CPSUBSW :public Object
	{
	public:
		CPSUBSW();
		~CPSUBSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSUBSW;

#endif
