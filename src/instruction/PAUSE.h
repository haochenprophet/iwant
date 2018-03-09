#ifndef PAUSE_H
#define PAUSE_H

#include "../object.h"

namespace n_PAUSE {
	class CPAUSE :public Object
	{
	public:
		CPAUSE();
		~CPAUSE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PAUSE;

#endif
