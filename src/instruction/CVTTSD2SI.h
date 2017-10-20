#ifndef CVTTSD2SI_H
#define CVTTSD2SI_H

#include "object.h"

namespace n_CVTTSD2SI {
	class CCVTTSD2SI :public Object
	{
	public:
		CCVTTSD2SI();
		~CCVTTSD2SI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTTSD2SI;

#endif
