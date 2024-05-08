#ifndef ADDSS_H
#define ADDSS_H

#include "../object.h"

namespace n_ADDSS {
	class CADDSS :public Object
	{
	public:
		CADDSS();
		~CADDSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ADDSS;

#endif
