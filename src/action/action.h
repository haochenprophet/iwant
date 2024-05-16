#ifndef ACTION_H
#define ACTION_H

#include "object/object.h"

namespace n_action {
	class Caction :public Object
	{
	public:
		Caction();
		int my_init(void *p=nullptr);
	};
}

using namespace n_action;

#endif
