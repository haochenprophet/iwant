#ifndef KMOVD_H
#define KMOVD_H

#include "object.h"

namespace n_KMOVD {
	class CKMOVD :public Object
	{
	public:
		CKMOVD();
		~CKMOVD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_KMOVD;

#endif
