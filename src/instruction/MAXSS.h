#ifndef MAXSS_H
#define MAXSS_H

#include "object/object.h"

namespace n_MAXSS {
	class CMAXSS :public Object
	{
	public:
		CMAXSS();
		~CMAXSS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_MAXSS;

#endif
