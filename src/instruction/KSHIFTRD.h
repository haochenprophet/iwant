#ifndef KSHIFTRD_H
#define KSHIFTRD_H

#include "object/object.h"

namespace n_KSHIFTRD {
	class CKSHIFTRD :public Object
	{
	public:
		CKSHIFTRD();
		~CKSHIFTRD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KSHIFTRD;

#endif
