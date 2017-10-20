#ifndef KORB_H
#define KORB_H

#include "object.h"

namespace n_KORB {
	class CKORB :public Object
	{
	public:
		CKORB();
		~CKORB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KORB;

#endif
