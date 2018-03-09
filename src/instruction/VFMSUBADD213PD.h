#ifndef VFMSUBADD213PD_H
#define VFMSUBADD213PD_H

#include "../object.h"

namespace n_VFMSUBADD213PD {
	class CVFMSUBADD213PD :public Object
	{
	public:
		CVFMSUBADD213PD();
		~CVFMSUBADD213PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUBADD213PD;

#endif
