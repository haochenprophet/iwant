#ifndef CVTPS2PD_H
#define CVTPS2PD_H

#include "../object.h"

namespace n_CVTPS2PD {
	class CCVTPS2PD :public Object
	{
	public:
		CCVTPS2PD();
		~CCVTPS2PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CVTPS2PD;

#endif
