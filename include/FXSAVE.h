#ifndef FXSAVE_H
#define FXSAVE_H

#include "../object.h"

namespace n_FXSAVE {
	class CFXSAVE :public Object
	{
	public:
		CFXSAVE();
		~CFXSAVE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FXSAVE;

#endif
