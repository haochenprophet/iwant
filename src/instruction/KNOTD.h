#ifndef KNOTD_H
#define KNOTD_H

#include "object.h"

namespace n_KNOTD {
	class CKNOTD :public Object
	{
	public:
		CKNOTD();
		~CKNOTD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KNOTD;

#endif
