#ifndef VRANGESD_H
#define VRANGESD_H

#include "object/object.h"

namespace n_VRANGESD {
	class CVRANGESD :public Object
	{
	public:
		CVRANGESD();
		~CVRANGESD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VRANGESD;

#endif
