#ifndef VRCP28PS_H
#define VRCP28PS_H

#include "../object.h"

namespace n_VRCP28PS {
	class CVRCP28PS :public Object
	{
	public:
		CVRCP28PS();
		~CVRCP28PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRCP28PS;

#endif
