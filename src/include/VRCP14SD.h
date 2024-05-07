#ifndef VRCP14SD_H
#define VRCP14SD_H

#include "../object.h"

namespace n_VRCP14SD {
	class CVRCP14SD :public Object
	{
	public:
		CVRCP14SD();
		~CVRCP14SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRCP14SD;

#endif
