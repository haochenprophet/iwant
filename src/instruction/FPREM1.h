#ifndef FPREM1_H
#define FPREM1_H

#include "../object.h"

namespace n_FPREM1 {
	class CFPREM1 :public Object
	{
	public:
		CFPREM1();
		~CFPREM1();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FPREM1;

#endif
