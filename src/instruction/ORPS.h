#ifndef ORPS_H
#define ORPS_H

#include "object/object.h"

namespace n_ORPS {
	class CORPS :public Object
	{
	public:
		CORPS();
		~CORPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ORPS;

#endif
