#ifndef VFNMSUB132SD_H
#define VFNMSUB132SD_H

#include "object/object.h"

namespace n_VFNMSUB132SD {
	class CVFNMSUB132SD :public Object
	{
	public:
		CVFNMSUB132SD();
		~CVFNMSUB132SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB132SD;

#endif
