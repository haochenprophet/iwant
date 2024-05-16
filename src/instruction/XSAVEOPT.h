#ifndef XSAVEOPT_H
#define XSAVEOPT_H

#include "object/object.h"

namespace n_XSAVEOPT {
	class CXSAVEOPT :public Object
	{
	public:
		CXSAVEOPT();
		~CXSAVEOPT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XSAVEOPT;

#endif
