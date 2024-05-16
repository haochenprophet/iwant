#ifndef MASKMOVDQU_H
#define MASKMOVDQU_H

#include "object/object.h"

namespace n_MASKMOVDQU {
	class CMASKMOVDQU :public Object
	{
	public:
		CMASKMOVDQU();
		~CMASKMOVDQU();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MASKMOVDQU;

#endif
