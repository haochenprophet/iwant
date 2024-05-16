#ifndef PMAXUB_H
#define PMAXUB_H

#include "object/object.h"

namespace n_PMAXUB {
	class CPMAXUB :public Object
	{
	public:
		CPMAXUB();
		~CPMAXUB();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMAXUB;

#endif
