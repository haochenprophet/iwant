#ifndef FXAM_H
#define FXAM_H

#include "object.h"

namespace n_FXAM {
	class CFXAM :public Object
	{
	public:
		CFXAM();
		~CFXAM();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FXAM;

#endif
