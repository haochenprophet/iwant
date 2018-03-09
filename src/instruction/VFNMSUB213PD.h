#ifndef VFNMSUB213PD_H
#define VFNMSUB213PD_H

#include "../object.h"

namespace n_VFNMSUB213PD {
	class CVFNMSUB213PD :public Object
	{
	public:
		CVFNMSUB213PD();
		~CVFNMSUB213PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFNMSUB213PD;

#endif
