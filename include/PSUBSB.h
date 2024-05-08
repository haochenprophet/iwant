#ifndef PSUBSB_H
#define PSUBSB_H

#include "../object.h"

namespace n_PSUBSB {
	class CPSUBSB :public Object
	{
	public:
		CPSUBSB();
		~CPSUBSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PSUBSB;

#endif
