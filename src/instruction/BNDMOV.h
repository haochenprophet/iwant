#ifndef BNDMOV_H
#define BNDMOV_H

#include "object/object.h"

namespace n_BNDMOV {
	class CBNDMOV :public Object
	{
	public:
		CBNDMOV();
		~CBNDMOV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BNDMOV;

#endif
