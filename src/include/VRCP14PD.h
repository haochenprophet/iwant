#ifndef VRCP14PD_H
#define VRCP14PD_H

#include "../object.h"

namespace n_VRCP14PD {
	class CVRCP14PD :public Object
	{
	public:
		CVRCP14PD();
		~CVRCP14PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRCP14PD;

#endif
