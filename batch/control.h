#ifndef CONTROL_H
#define CONTROL_H

#include "object.h"

namespace n_control {
	class Ccontrol :public Object
	{
	public:
		Ccontrol();
		~Ccontrol();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccontrol); }
	};
}

using namespace n_control;

#endif
