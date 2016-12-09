#ifndef ACTION_H
#define ACTION_H

#include "object.h"

namespace n_action {
	class Caction :public Object
	{
	public:
		Caction();
		int my_init(void *p=NULL);
	};
}

using namespace n_action;

#endif
