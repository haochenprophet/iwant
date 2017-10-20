#ifndef KSHIFTRB_H
#define KSHIFTRB_H

#include "object.h"

namespace n_KSHIFTRB {
	class CKSHIFTRB :public Object
	{
	public:
		CKSHIFTRB();
		~CKSHIFTRB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KSHIFTRB;

#endif
