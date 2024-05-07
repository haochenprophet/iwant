#ifndef MULSS_H
#define MULSS_H

#include "../object.h"

namespace n_MULSS {
	class CMULSS :public Object
	{
	public:
		CMULSS();
		~CMULSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MULSS;

#endif
