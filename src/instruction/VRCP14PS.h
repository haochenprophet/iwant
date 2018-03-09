#ifndef VRCP14PS_H
#define VRCP14PS_H

#include "../object.h"

namespace n_VRCP14PS {
	class CVRCP14PS :public Object
	{
	public:
		CVRCP14PS();
		~CVRCP14PS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRCP14PS;

#endif
