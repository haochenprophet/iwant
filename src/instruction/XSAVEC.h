#ifndef XSAVEC_H
#define XSAVEC_H

#include "object/object.h"

namespace n_XSAVEC {
	class CXSAVEC :public Object
	{
	public:
		CXSAVEC();
		~CXSAVEC();
		int my_init(void *p=nullptr);
	};
}

using namespace n_XSAVEC;

#endif
