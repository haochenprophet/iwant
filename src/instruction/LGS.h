#ifndef LGS_H
#define LGS_H

#include "object/object.h"

namespace n_LGS {
	class CLGS :public Object
	{
	public:
		CLGS();
		~CLGS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LGS;

#endif
