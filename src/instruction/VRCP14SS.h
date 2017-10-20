#ifndef VRCP14SS_H
#define VRCP14SS_H

#include "object.h"

namespace n_VRCP14SS {
	class CVRCP14SS :public Object
	{
	public:
		CVRCP14SS();
		~CVRCP14SS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRCP14SS;

#endif
