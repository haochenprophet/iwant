#ifndef PUNPCKLBW_H
#define PUNPCKLBW_H

#include "object/object.h"

namespace n_PUNPCKLBW {
	class CPUNPCKLBW :public Object
	{
	public:
		CPUNPCKLBW();
		~CPUNPCKLBW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PUNPCKLBW;

#endif
