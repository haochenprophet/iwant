#ifndef LDS_H
#define LDS_H

#include "../object.h"

namespace n_LDS {
	class CLDS :public Object
	{
	public:
		CLDS();
		~CLDS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LDS;

#endif
