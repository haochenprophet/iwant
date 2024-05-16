#ifndef VFMSUB213SD_H
#define VFMSUB213SD_H

#include "object/object.h"

namespace n_VFMSUB213SD {
	class CVFMSUB213SD :public Object
	{
	public:
		CVFMSUB213SD();
		~CVFMSUB213SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB213SD;

#endif
