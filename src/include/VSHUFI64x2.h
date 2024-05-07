#ifndef VSHUFI64X2_H
#define VSHUFI64X2_H

#include "../object.h"

namespace n_VSHUFI64x2 {
	class CVSHUFI64x2 :public Object
	{
	public:
		CVSHUFI64x2();
		~CVSHUFI64x2();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VSHUFI64x2;

#endif
