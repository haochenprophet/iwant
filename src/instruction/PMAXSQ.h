#ifndef PMAXSQ_H
#define PMAXSQ_H

#include "object/object.h"

namespace n_PMAXSQ {
	class CPMAXSQ :public Object
	{
	public:
		CPMAXSQ();
		~CPMAXSQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMAXSQ;

#endif
