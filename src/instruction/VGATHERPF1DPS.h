#ifndef VGATHERPF1DPS_H
#define VGATHERPF1DPS_H

#include "object.h"

namespace n_VGATHERPF1DPS {
	class CVGATHERPF1DPS :public Object
	{
	public:
		CVGATHERPF1DPS();
		~CVGATHERPF1DPS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERPF1DPS;

#endif
