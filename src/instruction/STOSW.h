#ifndef STOSW_H
#define STOSW_H

#include "object.h"

namespace n_STOSW {
	class CSTOSW :public Object
	{
	public:
		CSTOSW();
		~CSTOSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_STOSW;

#endif
