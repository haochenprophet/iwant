#ifndef CVTSS2SI_H
#define CVTSS2SI_H

#include "object/object.h"

namespace n_CVTSS2SI {
	class CCVTSS2SI :public Object
	{
	public:
		CCVTSS2SI();
		~CCVTSS2SI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTSS2SI;

#endif
