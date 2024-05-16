#ifndef FTST_H
#define FTST_H

#include "object/object.h"

namespace n_FTST {
	class CFTST :public Object
	{
	public:
		CFTST();
		~CFTST();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FTST;

#endif
