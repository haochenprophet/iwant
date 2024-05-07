#ifndef FRNDINT_H
#define FRNDINT_H

#include "../object.h"

namespace n_FRNDINT {
	class CFRNDINT :public Object
	{
	public:
		CFRNDINT();
		~CFRNDINT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FRNDINT;

#endif
