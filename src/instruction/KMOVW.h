#ifndef KMOVW_H
#define KMOVW_H

#include "object/object.h"

namespace n_KMOVW {
	class CKMOVW :public Object
	{
	public:
		CKMOVW();
		~CKMOVW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KMOVW;

#endif
