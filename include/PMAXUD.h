#ifndef PMAXUD_H
#define PMAXUD_H

#include "../object.h"

namespace n_PMAXUD {
	class CPMAXUD :public Object
	{
	public:
		CPMAXUD();
		~CPMAXUD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMAXUD;

#endif
