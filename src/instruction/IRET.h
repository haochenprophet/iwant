#ifndef IRET_H
#define IRET_H

#include "object/object.h"

namespace n_IRET {
	class CIRET :public Object
	{
	public:
		CIRET();
		~CIRET();
		int my_init(void *p=nullptr);
	};
}

using namespace n_IRET;

#endif
