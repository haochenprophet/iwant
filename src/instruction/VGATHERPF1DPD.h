#ifndef VGATHERPF1DPD_H
#define VGATHERPF1DPD_H

#include "object.h"

namespace n_VGATHERPF1DPD {
	class CVGATHERPF1DPD :public Object
	{
	public:
		CVGATHERPF1DPD();
		~CVGATHERPF1DPD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_VGATHERPF1DPD;

#endif
