#ifndef BNDMK_H
#define BNDMK_H

#include "object.h"

namespace n_BNDMK {
	class CBNDMK :public Object
	{
	public:
		CBNDMK();
		~CBNDMK();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BNDMK;

#endif
