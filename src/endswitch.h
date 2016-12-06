#ifndef ENDSWITCH_H
#define ENDSWITCH_H

#include "object.h"

namespace n_endswitch {
	class Cendswitch :public Object
	{
	public:
		Cendswitch();
		int my_init(void *p=NULL);
	};
}

using namespace n_endswitch;

#endif
