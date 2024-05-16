#ifndef MOVSW_H
#define MOVSW_H

#include "object/object.h"

namespace n_MOVSW {
	class CMOVSW :public Object
	{
	public:
		CMOVSW();
		~CMOVSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVSW;

#endif
