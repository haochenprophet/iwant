#ifndef VPLZCNTD_H
#define VPLZCNTD_H

#include "object.h"

namespace n_VPLZCNTD {
	class CVPLZCNTD :public Object
	{
	public:
		CVPLZCNTD();
		~CVPLZCNTD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPLZCNTD;

#endif
