#ifndef KSHIFTLD_H
#define KSHIFTLD_H

#include "object/object.h"

namespace n_KSHIFTLD {
	class CKSHIFTLD :public Object
	{
	public:
		CKSHIFTLD();
		~CKSHIFTLD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KSHIFTLD;

#endif
