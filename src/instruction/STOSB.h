#ifndef STOSB_H
#define STOSB_H

#include "object.h"

namespace n_STOSB {
	class CSTOSB :public Object
	{
	public:
		CSTOSB();
		~CSTOSB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_STOSB;

#endif
