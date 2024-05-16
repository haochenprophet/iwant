#ifndef KNOTB_H
#define KNOTB_H

#include "object/object.h"

namespace n_KNOTB {
	class CKNOTB :public Object
	{
	public:
		CKNOTB();
		~CKNOTB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KNOTB;

#endif
