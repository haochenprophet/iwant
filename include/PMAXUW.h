#ifndef PMAXUW_H
#define PMAXUW_H

#include "../object.h"

namespace n_PMAXUW {
	class CPMAXUW :public Object
	{
	public:
		CPMAXUW();
		~CPMAXUW();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMAXUW;

#endif
