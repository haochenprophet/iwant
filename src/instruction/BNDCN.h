#ifndef BNDCN_H
#define BNDCN_H

#include "object/object.h"

namespace n_BNDCN {
	class CBNDCN :public Object
	{
	public:
		CBNDCN();
		~CBNDCN();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BNDCN;

#endif
