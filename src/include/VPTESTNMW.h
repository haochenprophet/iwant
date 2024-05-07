#ifndef VPTESTNMW_H
#define VPTESTNMW_H

#include "../object.h"

namespace n_VPTESTNMW {
	class CVPTESTNMW :public Object
	{
	public:
		CVPTESTNMW();
		~CVPTESTNMW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPTESTNMW;

#endif
