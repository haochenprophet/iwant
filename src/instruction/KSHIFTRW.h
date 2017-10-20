#ifndef KSHIFTRW_H
#define KSHIFTRW_H

#include "object.h"

namespace n_KSHIFTRW {
	class CKSHIFTRW :public Object
	{
	public:
		CKSHIFTRW();
		~CKSHIFTRW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KSHIFTRW;

#endif
