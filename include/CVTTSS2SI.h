#ifndef CVTTSS2SI_H
#define CVTTSS2SI_H

#include "../object.h"

namespace n_CVTTSS2SI {
	class CCVTTSS2SI :public Object
	{
	public:
		CCVTTSS2SI();
		~CCVTTSS2SI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTTSS2SI;

#endif
