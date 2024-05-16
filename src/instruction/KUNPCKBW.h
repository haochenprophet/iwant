#ifndef KUNPCKBW_H
#define KUNPCKBW_H

#include "object/object.h"

namespace n_KUNPCKBW {
	class CKUNPCKBW :public Object
	{
	public:
		CKUNPCKBW();
		~CKUNPCKBW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KUNPCKBW;

#endif
