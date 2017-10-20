#ifndef VFNMSUB213SD_H
#define VFNMSUB213SD_H

#include "object.h"

namespace n_VFNMSUB213SD {
	class CVFNMSUB213SD :public Object
	{
	public:
		CVFNMSUB213SD();
		~CVFNMSUB213SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB213SD;

#endif
