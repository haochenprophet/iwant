#ifndef VFMSUB213PD_H
#define VFMSUB213PD_H

#include "../object.h"

namespace n_VFMSUB213PD {
	class CVFMSUB213PD :public Object
	{
	public:
		CVFMSUB213PD();
		~CVFMSUB213PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUB213PD;

#endif
