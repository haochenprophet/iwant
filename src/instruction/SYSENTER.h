#ifndef SYSENTER_H
#define SYSENTER_H

#include "object/object.h"

namespace n_SYSENTER {
	class CSYSENTER :public Object
	{
	public:
		CSYSENTER();
		~CSYSENTER();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SYSENTER;

#endif
