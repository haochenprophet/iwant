#ifndef MOVSS_H
#define MOVSS_H

#include "object/object.h"

namespace n_MOVSS {
	class CMOVSS :public Object
	{
	public:
		CMOVSS();
		~CMOVSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MOVSS;

#endif
