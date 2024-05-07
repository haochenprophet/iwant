#ifndef FSAVE_H
#define FSAVE_H

#include "../object.h"

namespace n_FSAVE {
	class CFSAVE :public Object
	{
	public:
		CFSAVE();
		~CFSAVE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FSAVE;

#endif
