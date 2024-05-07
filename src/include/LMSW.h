#ifndef LMSW_H
#define LMSW_H

#include "../object.h"

namespace n_LMSW {
	class CLMSW :public Object
	{
	public:
		CLMSW();
		~CLMSW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LMSW;

#endif
