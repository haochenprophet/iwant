#ifndef PMINSQ_H
#define PMINSQ_H

#include "object/object.h"

namespace n_PMINSQ {
	class CPMINSQ :public Object
	{
	public:
		CPMINSQ();
		~CPMINSQ();
		int my_init(void *p=nullptr);
	};
}

using namespace n_PMINSQ;

#endif
