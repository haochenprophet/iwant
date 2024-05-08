#ifndef FNSAVE_H
#define FNSAVE_H

#include "../object.h"

namespace n_FNSAVE {
	class CFNSAVE :public Object
	{
	public:
		CFNSAVE();
		~CFNSAVE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FNSAVE;

#endif
