#ifndef VSHUFI32X4_H
#define VSHUFI32X4_H

#include "../object.h"

namespace n_VSHUFI32x4 {
	class CVSHUFI32x4 :public Object
	{
	public:
		CVSHUFI32x4();
		~CVSHUFI32x4();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSHUFI32x4;

#endif
