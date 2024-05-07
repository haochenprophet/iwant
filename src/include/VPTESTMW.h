#ifndef VPTESTMW_H
#define VPTESTMW_H

#include "../object.h"

namespace n_VPTESTMW {
	class CVPTESTMW :public Object
	{
	public:
		CVPTESTMW();
		~CVPTESTMW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPTESTMW;

#endif
