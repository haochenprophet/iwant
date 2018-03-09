#ifndef VFMSUB132SD_H
#define VFMSUB132SD_H

#include "../object.h"

namespace n_VFMSUB132SD {
	class CVFMSUB132SD :public Object
	{
	public:
		CVFMSUB132SD();
		~CVFMSUB132SD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB132SD;

#endif
