#ifndef XSAVE_H
#define XSAVE_H

#include "object/object.h"

namespace n_XSAVE {
	class CXSAVE :public Object
	{
	public:
		CXSAVE();
		~CXSAVE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XSAVE;

#endif
