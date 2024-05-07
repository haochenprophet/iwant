#ifndef PSUBW_H
#define PSUBW_H

#include "../object.h"

namespace n_PSUBW {
	class CPSUBW :public Object
	{
	public:
		CPSUBW();
		~CPSUBW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSUBW;

#endif
