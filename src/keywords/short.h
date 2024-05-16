#ifndef SHORT_H
#define SHORT_H

#include "object/object.h"

namespace n_short {
	class Cshort :public Object
	{
	public:
		Cshort();
		int my_init(void *p=nullptr);
	};
}

using namespace n_short;

#endif
