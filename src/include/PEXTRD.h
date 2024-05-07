#ifndef PEXTRD_H
#define PEXTRD_H

#include "../object.h"

namespace n_PEXTRD {
	class CPEXTRD :public Object
	{
	public:
		CPEXTRD();
		~CPEXTRD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PEXTRD;

#endif
