#ifndef CWDE_H
#define CWDE_H

#include "../object.h"

namespace n_CWDE {
	class CCWDE :public Object
	{
	public:
		CCWDE();
		~CCWDE();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CWDE;

#endif
