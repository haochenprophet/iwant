#ifndef FINCSTP_H
#define FINCSTP_H

#include "object/object.h"

namespace n_FINCSTP {
	class CFINCSTP :public Object
	{
	public:
		CFINCSTP();
		~CFINCSTP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FINCSTP;

#endif
