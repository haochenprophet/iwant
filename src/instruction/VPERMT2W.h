#ifndef VPERMT2W_H
#define VPERMT2W_H

#include "object.h"

namespace n_VPERMT2W {
	class CVPERMT2W :public Object
	{
	public:
		CVPERMT2W();
		~CVPERMT2W();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPERMT2W;

#endif
