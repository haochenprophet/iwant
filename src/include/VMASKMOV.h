#ifndef VMASKMOV_H
#define VMASKMOV_H

#include "../object.h"

namespace n_VMASKMOV {
	class CVMASKMOV :public Object
	{
	public:
		CVMASKMOV();
		~CVMASKMOV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VMASKMOV;

#endif
