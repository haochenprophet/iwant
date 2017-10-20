#ifndef KSHIFTLB_H
#define KSHIFTLB_H

#include "object.h"

namespace n_KSHIFTLB {
	class CKSHIFTLB :public Object
	{
	public:
		CKSHIFTLB();
		~CKSHIFTLB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KSHIFTLB;

#endif
