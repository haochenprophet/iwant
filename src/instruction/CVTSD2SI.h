#ifndef CVTSD2SI_H
#define CVTSD2SI_H

#include "object.h"

namespace n_CVTSD2SI {
	class CCVTSD2SI :public Object
	{
	public:
		CCVTSD2SI();
		~CCVTSD2SI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTSD2SI;

#endif
