#ifndef INTERFACE_H
#define INTERFACE_H

#include "../object.h"

namespace n_interface {
	class Cinterface :public Object
	{
	public:
		Cinterface();
		int my_init(void *p=nullptr);
	};
}

using namespace n_interface;

#endif
