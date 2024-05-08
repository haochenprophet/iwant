#ifndef ROUNDSS_H
#define ROUNDSS_H

#include "../object.h"

namespace n_ROUNDSS {
	class CROUNDSS :public Object
	{
	public:
		CROUNDSS();
		~CROUNDSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ROUNDSS;

#endif
