#ifndef CONTROL_H
#define CONTROL_H

#include "object/object.h"

namespace n_control {
	class Ccontrol :public Object
	{
	public:
		Ccontrol();
		~Ccontrol();
		int my_init(void *p=nullptr);
	};
}

using namespace n_control;

#endif
