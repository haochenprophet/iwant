#ifndef MOVNTI_H
#define MOVNTI_H

#include "object/object.h"

namespace n_MOVNTI {
	class CMOVNTI :public Object
	{
	public:
		CMOVNTI();
		~CMOVNTI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVNTI;

#endif
