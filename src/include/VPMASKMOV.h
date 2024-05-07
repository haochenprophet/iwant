#ifndef VPMASKMOV_H
#define VPMASKMOV_H

#include "../object.h"

namespace n_VPMASKMOV {
	class CVPMASKMOV :public Object
	{
	public:
		CVPMASKMOV();
		~CVPMASKMOV();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VPMASKMOV;

#endif
