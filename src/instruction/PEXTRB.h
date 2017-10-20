#ifndef PEXTRB_H
#define PEXTRB_H

#include "object.h"

namespace n_PEXTRB {
	class CPEXTRB :public Object
	{
	public:
		CPEXTRB();
		~CPEXTRB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PEXTRB;

#endif
