#ifndef PINSRB_H
#define PINSRB_H

#include "../object.h"

namespace n_PINSRB {
	class CPINSRB :public Object
	{
	public:
		CPINSRB();
		~CPINSRB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PINSRB;

#endif
