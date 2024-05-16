#ifndef FPREM_H
#define FPREM_H

#include "object/object.h"

namespace n_FPREM {
	class CFPREM :public Object
	{
	public:
		CFPREM();
		~CFPREM();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FPREM;

#endif
