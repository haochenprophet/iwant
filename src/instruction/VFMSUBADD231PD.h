#ifndef VFMSUBADD231PD_H
#define VFMSUBADD231PD_H

#include "object/object.h"

namespace n_VFMSUBADD231PD {
	class CVFMSUBADD231PD :public Object
	{
	public:
		CVFMSUBADD231PD();
		~CVFMSUBADD231PD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VFMSUBADD231PD;

#endif
