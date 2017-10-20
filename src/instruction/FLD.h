#ifndef FLD_H
#define FLD_H

#include "object.h"

namespace n_FLD {
	class CFLD :public Object
	{
	public:
		CFLD();
		~CFLD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FLD;

#endif
