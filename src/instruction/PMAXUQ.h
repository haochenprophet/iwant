#ifndef PMAXUQ_H
#define PMAXUQ_H

#include "../object.h"

namespace n_PMAXUQ {
	class CPMAXUQ :public Object
	{
	public:
		CPMAXUQ();
		~CPMAXUQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMAXUQ;

#endif
