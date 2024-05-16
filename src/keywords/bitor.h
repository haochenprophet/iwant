#ifndef BITOR_H
#define BITOR_H

#include "object/object.h"

namespace n_bitor {
	class Cbitor :public Object
	{
	public:
		Cbitor();
		int my_init(void *p=nullptr);
	};
}

using namespace n_bitor;

#endif
