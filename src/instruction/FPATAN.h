#ifndef FPATAN_H
#define FPATAN_H

#include "object.h"

namespace n_FPATAN {
	class CFPATAN :public Object
	{
	public:
		CFPATAN();
		~CFPATAN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FPATAN;

#endif
