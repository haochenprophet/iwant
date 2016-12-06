#ifndef BITOR_H
#define BITOR_H

#include "object.h"

namespace n_bitor {
	class Cbitor :public Object
	{
	public:
		Cbitor();
		int my_init(void *p=NULL);
	};
}

using namespace n_bitor;

#endif
