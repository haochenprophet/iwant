#ifndef FDIVP_H
#define FDIVP_H

#include "object/object.h"

namespace n_FDIVP {
	class CFDIVP :public Object
	{
	public:
		CFDIVP();
		~CFDIVP();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FDIVP;

#endif
