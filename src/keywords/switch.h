#ifndef SWITCH_H
#define SWITCH_H

#include "object/object.h"

namespace n_switch {
	class Cswitch :public Object
	{
	public:
		Cswitch();
		int my_init(void *p=nullptr);
	};
}

using namespace n_switch;

#endif
