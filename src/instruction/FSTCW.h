#ifndef FSTCW_H
#define FSTCW_H

#include "object/object.h"

namespace n_FSTCW {
	class CFSTCW :public Object
	{
	public:
		CFSTCW();
		~CFSTCW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSTCW;

#endif
