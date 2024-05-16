#ifndef VPROLVD_H
#define VPROLVD_H

#include "object/object.h"

namespace n_VPROLVD {
	class CVPROLVD :public Object
	{
	public:
		CVPROLVD();
		~CVPROLVD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPROLVD;

#endif
