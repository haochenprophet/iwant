#ifndef FDECSTP_H
#define FDECSTP_H

#include "object/object.h"

namespace n_FDECSTP {
	class CFDECSTP :public Object
	{
	public:
		CFDECSTP();
		~CFDECSTP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FDECSTP;

#endif
