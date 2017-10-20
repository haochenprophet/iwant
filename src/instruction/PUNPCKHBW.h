#ifndef PUNPCKHBW_H
#define PUNPCKHBW_H

#include "object.h"

namespace n_PUNPCKHBW {
	class CPUNPCKHBW :public Object
	{
	public:
		CPUNPCKHBW();
		~CPUNPCKHBW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUNPCKHBW;

#endif
