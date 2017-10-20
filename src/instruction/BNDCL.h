#ifndef BNDCL_H
#define BNDCL_H

#include "object.h"

namespace n_BNDCL {
	class CBNDCL :public Object
	{
	public:
		CBNDCL();
		~CBNDCL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_BNDCL;

#endif
