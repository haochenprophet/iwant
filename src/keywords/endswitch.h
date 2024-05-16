#ifndef ENDSWITCH_H
#define ENDSWITCH_H

#include "object/object.h"

namespace n_endswitch {
	class Cendswitch :public Object
	{
	public:
		Cendswitch();
		int my_init(void *p=nullptr);
	};
}

using namespace n_endswitch;

#endif
